//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKitUI/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSString, PSPDFDocument, UIViewController;
@protocol PSPDFActionExecutorDelegate, PSPDFActionExecutorDelegate><PSPDFDelegateProxying, PSPDFApplication, PSPDFApplicationPolicy, PSPDFFileManager, PSPDFPresentationActions;

@interface PSPDFActionExecutor : NSObject <MFMailComposeViewControllerDelegate>
{
    PSPDFDocument *_document;
    UIViewController<PSPDFPresentationActions> *_sourceViewController;
    id <PSPDFApplication> _application;
    id <PSPDFFileManager> _fileManager;
    id <PSPDFApplicationPolicy> _policy;
    id <PSPDFActionExecutorDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
}

@property(retain) id <PSPDFActionExecutorDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(retain, nonatomic) id <PSPDFApplicationPolicy> policy; // @synthesize policy=_policy;
@property(retain, nonatomic) id <PSPDFFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) id <PSPDFApplication> application; // @synthesize application=_application;
@property(nonatomic) __weak UIViewController<PSPDFPresentationActions> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)attachmentFileNameForController:(id)arg1 submittingDocumentProvider:(id)arg2;
- (_Bool)handleMailToURLRequest:(id)arg1 documentProvider:(id)arg2 submissionController:(id)arg3;
- (_Bool)executeHideAction:(id)arg1;
- (_Bool)executeResetFormAction:(id)arg1;
- (_Bool)executeSubmitFormAction:(id)arg1 pageIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (_Bool)executeMediaAction:(id)arg1;
- (_Bool)executeNamedAction:(id)arg1 pageIndex:(unsigned long long)arg2 targetRect:(struct CGRect)arg3 animated:(_Bool)arg4;
- (_Bool)executeEmbeddedGoToAction:(id)arg1 animated:(_Bool)arg2;
- (_Bool)executeJavaScriptAction:(id)arg1 actionContainer:(id)arg2;
- (_Bool)executeRemoteGoToAction:(id)arg1 pageIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (_Bool)executeURLAction:(id)arg1 targetRect:(struct CGRect)arg2 actionContainer:(id)arg3 animated:(_Bool)arg4;
- (unsigned long long)linkActionForAction:(id)arg1;
- (_Bool)executeGoToAction:(id)arg1 pageIndex:(unsigned long long)arg2 actionContainer:(id)arg3 animated:(_Bool)arg4;
- (_Bool)executePDFAction:(id)arg1 targetRect:(struct CGRect)arg2 pageIndex:(unsigned long long)arg3 animated:(_Bool)arg4 actionContainer:(id)arg5;
- (id)initWithDocument:(id)arg1;
- (id)init;
@property(retain, nonatomic) id <PSPDFActionExecutorDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFActionExecutorDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
