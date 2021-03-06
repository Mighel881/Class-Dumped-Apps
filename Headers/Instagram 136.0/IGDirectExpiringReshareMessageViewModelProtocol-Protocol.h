//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectAnimatedMediaMessageViewModel, IGDirectArchivedStoryViewModel, IGDirectGradient, IGDirectMessageQuickReaction, IGDirectTextMessageBubbleViewModel, IGGiphyGIFModel, IGStyledString, IGUser, NSAttributedString, NSString, NSURL;

@protocol IGDirectExpiringReshareMessageViewModelProtocol <NSObject>
- (double)imageCornerRadius;
- (double)contentHeight;
- (IGUser *)reelSender;
- (IGDirectGradient *)addToStoryInThumbnailBackgroundGradient;
- (_Bool)shouldDisplayAddToStoryInThumbnail;
- (IGGiphyGIFModel *)giphyModel;
- (IGDirectAnimatedMediaMessageViewModel *)animatedMediaMessageViewModel;
- (IGDirectArchivedStoryViewModel *)archivedStoryViewModel;
- (_Bool)shouldUseAttributedHeader;
- (_Bool)shouldMoveQuickReactionToTextReply;
- (_Bool)showFalseInformationView;
- (_Bool)showSensitivityView;
- (_Bool)canRepostOnMention;
- (_Bool)hasEnded;
- (_Bool)isExpired;
- (long long)liveViewerCount;
- (IGUser *)liveBroadcaster;
- (IGDirectMessageQuickReaction *)quickReaction;
- (IGStyledString *)placeholderText;
- (double)cellWidth;
- (IGDirectTextMessageBubbleViewModel *)textBubbleViewModel;
- (struct CGSize)headerSize;
- (struct CGSize)imageSize;
- (NSURL *)imageURL;
- (NSString *)CTALabelText;
- (NSAttributedString *)headerText;
@end

