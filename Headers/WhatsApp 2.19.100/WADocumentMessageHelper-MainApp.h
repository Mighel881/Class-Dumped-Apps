//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WADocumentMessageHelper.h>

@interface WADocumentMessageHelper (MainApp)
+ (id)footerAttributedTextWithFont:(id)arg1 forMessage:(id)arg2;
+ (struct WAMessageChatStringRepresentation)stringRepresentationForChatForMessage:(id)arg1 withConfig:(struct WAMessageChatStringRepresentationConfig)arg2;
+ (id)stringComponentsForExportForMessage:(id)arg1 withSenderName:(_Bool)arg2;
+ (double)preferredThumbnailWidthInPixelsForChat;
+ (id)fullImageFromURL:(id)arg1 ofType:(id)arg2;
+ (struct CGSize)preferredXMPPThumbnailSizeWithSourceImageSize:(struct CGSize)arg1;
+ (_Bool)needsImageLoader;
+ (_Bool)presentDocumentViewControllerIfPossibleForMessage:(id)arg1 fromViewController:(id)arg2;
+ (void)loadDocumentThumbnailForMessage:(id)arg1 placeholderHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)activityItemSubjectText;
- (CDUnknownBlockType)exportMediaActivityItemDeferredAction;
- (id)mediaActivityItemPlaceholderWithInternalReference:(_Bool *)arg1;
- (_Bool)requiresNetworkFetchForLargeImageWithInfo:(id)arg1;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
- (_Bool)shouldCacheLargeTransformedImage:(id)arg1 fromOriginalImage:(id)arg2 info:(id)arg3;
- (id)newImageLoaderInfo;
@end
