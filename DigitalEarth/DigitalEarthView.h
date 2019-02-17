
// DigitalEarthView.h : CDigitalEarthView ��Ľӿ�
//

#pragma once

#include "DigitalEarthDoc.h"
#include "OSGObject.h"


class CDigitalEarthView : public CView
{
protected: // �������л�����
	CDigitalEarthView();
	DECLARE_DYNCREATE(CDigitalEarthView)

// ����
public:
	CDigitalEarthDoc* GetDocument() const;

public:
	COSGObject* mOSG;
	HANDLE mThreadHandle;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CDigitalEarthView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()

public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnDestroy();
	virtual void OnInitialUpdate();
};

#ifndef _DEBUG  // DigitalEarthView.cpp �еĵ��԰汾
inline CDigitalEarthDoc* CDigitalEarthView::GetDocument() const
   { return reinterpret_cast<CDigitalEarthDoc*>(m_pDocument); }
#endif

