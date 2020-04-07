//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PDFCJSPlatformDelegate-Protocol.h>

@protocol PSPDFJSPlatformDelegate;

@interface PSPDFJSPlatformDelegateAdapter : NSObject <PDFCJSPlatformDelegate>
{
    id <PSPDFJSPlatformDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <PSPDFJSPlatformDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)print:(id)arg1;
- (long long)buttonImportIcon:(id)arg1 scriptUuid:(id)arg2 params:(id)arg3 formElementInfo:(id)arg4;
- (void)launchUrl:(id)arg1 scriptUuid:(id)arg2 url:(id)arg3 newFrame:(_Bool)arg4;
- (void)setPageNumber:(id)arg1 scriptUuid:(id)arg2 pageNumber:(int)arg3;
- (int)getPageNumber:(id)arg1 scriptUuid:(id)arg2;
- (void)mailDoc:(id)arg1 scriptUuid:(id)arg2 params:(id)arg3;
- (long long)showAlert:(id)arg1 scriptUuid:(id)arg2 alert:(id)arg3;
- (id)description;
- (void)setDelegate:(id)arg1;

@end
