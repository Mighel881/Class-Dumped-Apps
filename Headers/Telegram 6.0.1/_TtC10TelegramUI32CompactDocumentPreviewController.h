//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLPreviewController.h>

#import <TelegramUI/QLPreviewControllerDataSource-Protocol.h>
#import <TelegramUI/QLPreviewControllerDelegate-Protocol.h>

@interface _TtC10TelegramUI32CompactDocumentPreviewController : QLPreviewController <QLPreviewControllerDelegate, QLPreviewControllerDataSource>
{
    // Error parsing type: , name: postbox
    // Error parsing type: , name: file
    // Error parsing type: , name: item
    // Error parsing type: , name: tempFile
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)cancelPressed;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

