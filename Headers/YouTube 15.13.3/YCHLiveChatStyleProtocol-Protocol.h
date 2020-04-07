//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class QTMColorGroup, UIColor, UIFont, UIImage, YTILiveChatAuthorBadgeRenderer;

@protocol YCHLiveChatStyleProtocol <NSObject>
@property(readonly, nonatomic) UIColor *ychDonationAnnouncementOverlaySubtextColor;
@property(readonly, nonatomic) UIColor *ychDonationAnnouncementOverlayTextColor;
@property(readonly, nonatomic) UIColor *ychDonationAnnouncementOverlayBackgroundColor;
@property(readonly, nonatomic) double ychFadeEndPercentageRegular;
@property(readonly, nonatomic) double ychFadeEndPercentageCompact;
@property(readonly, nonatomic) double ychFadeStartPercentageRegular;
@property(readonly, nonatomic) double ychFadeStartPercentageCompact;
@property(readonly, nonatomic) UIColor *ychOverlayBackgroundColor;
@property(readonly, nonatomic) UIColor *ychWhiteTextColor;
@property(readonly, nonatomic) UIColor *ychBorderColorWhite;
@property(readonly, nonatomic) UIColor *ychBorderColorWhiteAlpha30;
@property(readonly, nonatomic) UIColor *ychBorderColor;
@property(readonly, nonatomic) UIColor *ychShimmerBackgroundColor;
@property(readonly, nonatomic) long long ychScrollIndicatorStyle;
@property(readonly, nonatomic) long long ychKeyboardAppearance;
@property(readonly, nonatomic) QTMColorGroup *ychSpinnerColorGroup;
@property(readonly, nonatomic) UIColor *ychSeparatorColor;
@property(readonly, nonatomic) UIColor *ychFadedContentDimmedColor;
@property(readonly, nonatomic) UIColor *ychCreatorHighlightBackgroundColor;
@property(readonly, nonatomic) UIColor *ychMentionsTextColor;
@property(readonly, nonatomic) UIColor *ychMentionsHightlighColor;
@property(readonly, nonatomic) UIColor *ychWordCountBubbleAlertColor;
@property(readonly, nonatomic) UIColor *ychWordCountBubbleNormalColor;
@property(readonly, nonatomic) UIColor *ychWordCountLabelAlertColor;
@property(readonly, nonatomic) UIColor *ychWordCountLabelCautionColor;
@property(readonly, nonatomic) UIColor *ychWordCountLabelNormalColor;
@property(readonly, nonatomic) UIColor *ychModerationButtonBackgroundColor;
@property(readonly, nonatomic) UIColor *ychModeChangesBackgroundColor;
@property(readonly, nonatomic) UIColor *ychMoreMessagesButtonColor;
@property(readonly, nonatomic) UIColor *ychInkColor;
@property(readonly, nonatomic) UIColor *ychSignInTitleColor;
@property(readonly, nonatomic) UIColor *ychSignInButtonColor;
@property(readonly, nonatomic) UIColor *ychDisabledBuyButtonTextColor;
@property(readonly, nonatomic) UIColor *ychDisabledBuyButtonColor;
@property(readonly, nonatomic) UIColor *ychDisabledButtonColor;
@property(readonly, nonatomic) UIColor *ychEnabledUnselectedButtonColor;
@property(readonly, nonatomic) UIColor *ychEnabledButtonColor;
@property(readonly, nonatomic) UIColor *ychTextViewIndicatorColor;
@property(readonly, nonatomic) UIColor *ychOverlayIconInactive;
@property(readonly, nonatomic) UIColor *ychDarkIconTintColor;
@property(readonly, nonatomic) UIColor *ychIconTintColor;
@property(readonly, nonatomic) UIColor *ychIconActiveOtherColor;
@property(readonly, nonatomic) UIColor *ychIconInactiveTintColor;
@property(readonly, nonatomic) UIColor *ychIconDisabledTintColor;
@property(readonly, nonatomic) UIFont *ychHeaderSubtitleFont;
@property(readonly, nonatomic) UIFont *ychHeaderTitleFont;
@property(readonly, nonatomic) UIColor *ychBrandBackgroundSecondaryColorAlpha0;
@property(readonly, nonatomic) UIColor *ychBrandBackgroundSecondaryColor;
@property(readonly, nonatomic) UIColor *ychOverlaySecondaryTextColor;
@property(readonly, nonatomic) UIColor *ychOverlayPrimaryTextColor;
@property(readonly, nonatomic) UIColor *ychSecondaryTextColor;
@property(readonly, nonatomic) UIColor *ychModeratedTextColor;
@property(readonly, nonatomic) UIColor *ychDarkTextColor;
@property(readonly, nonatomic) UIColor *ychExcessTextColor;
@property(readonly, nonatomic) UIColor *ychRegularTextColor;
@property(readonly, nonatomic) UIColor *ychLightTextColor;
@property(readonly, nonatomic) UIColor *ychLightestTextColor;
@property(readonly, nonatomic) UIColor *ychRegularBackgroundColor;
@property(readonly, nonatomic) UIColor *ychLightBackgroundColor;
@property(readonly, nonatomic) UIColor *ychLightestBackgroundColor;
- (UIColor *)ychAuthorVerifiedIconColorForHighlight:(long long)arg1;
- (UIColor *)ychAuthorTextColorForHighlight:(long long)arg1;
- (UIColor *)ychAuthorBackgroundColorForHighlight:(long long)arg1;
- (UIImage *)ych_checkCircleIcon;
- (UIImage *)ych_imageForBannerBackground;
- (UIImage *)ych_imageForBadge:(YTILiveChatAuthorBadgeRenderer *)arg1;
- (UIColor *)ych_colorForBadge:(YTILiveChatAuthorBadgeRenderer *)arg1;
@end
