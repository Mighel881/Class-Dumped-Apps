//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import <RedditCore/BaseModel-Protocol.h>
#import <RedditCore/NSSecureCoding-Protocol.h>

@class AuthorFlair, NSArray, NSDate, NSString, NSURL, StructuredStyle, SubredditMenuSet, SubredditWidgetSet, UIColor;

@interface Subreddit : ObservableObject <BaseModel, NSSecureCoding>
{
    _Bool _isSubscribed;
    _Bool _isFavorite;
    _Bool _isNSFW;
    _Bool _isQuarantined;
    _Bool _isModeratable;
    _Bool _isEnrolledInNewModmail;
    _Bool _isChatPostCreationAllowed;
    _Bool _isChatPostFeatureEnabled;
    _Bool _allowImages;
    _Bool _allowVideos;
    _Bool _allowGifs;
    _Bool _allowPolls;
    _Bool _isDefaultProfileIcon;
    _Bool _isDefaultBanner;
    _Bool _userCanCrosspost;
    _Bool _hasMenuWidget;
    _Bool _isPostFlairEnabled;
    _Bool _isPostFlairEditable;
    _Bool _isAuthorFlairEnabled;
    _Bool _isAuthorFlairEditable;
    _Bool _isAuthorFlairHidden;
    _Bool _isEmojisEnabled;
    NSString *_pk;
    NSString *_iconImageURLString;
    NSString *_bannerImageURLString;
    UIColor *_preferredColor;
    NSString *_communityIconURLString;
    UIColor *_primaryColor;
    NSURL *_mobileBannerBackgroundImageURL;
    NSURL *_bannerBackgroundImageURL;
    UIColor *_bannerBackgroundColor;
    NSString *_descriptionText;
    NSString *_publicDescriptionText;
    NSString *_displayName;
    NSString *_displayNamePrefixed;
    NSString *_visualName;
    NSString *_submitText;
    NSString *_urlPath;
    NSDate *_createdDate;
    NSString *_title;
    long long _subredditType;
    long long _subscribersCount;
    long long _activeCount;
    long long _notificationLevel;
    NSArray *_categories;
    NSString *_submissionType;
    unsigned long long _feedMode;
    unsigned long long _feedSort;
    unsigned long long _feedRange;
    unsigned long long _suggestedCommentSort;
    StructuredStyle *_style;
    SubredditWidgetSet *_widgetSet;
    SubredditMenuSet *_menuSet;
    AuthorFlair *_authorFlair;
}

+ (id)keyPathsToObserveChanges;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isEmojisEnabled; // @synthesize isEmojisEnabled=_isEmojisEnabled;
@property(retain, nonatomic) AuthorFlair *authorFlair; // @synthesize authorFlair=_authorFlair;
@property(nonatomic) _Bool isAuthorFlairHidden; // @synthesize isAuthorFlairHidden=_isAuthorFlairHidden;
@property(nonatomic) _Bool isAuthorFlairEditable; // @synthesize isAuthorFlairEditable=_isAuthorFlairEditable;
@property(nonatomic) _Bool isAuthorFlairEnabled; // @synthesize isAuthorFlairEnabled=_isAuthorFlairEnabled;
@property(nonatomic) _Bool isPostFlairEditable; // @synthesize isPostFlairEditable=_isPostFlairEditable;
@property(nonatomic) _Bool isPostFlairEnabled; // @synthesize isPostFlairEnabled=_isPostFlairEnabled;
@property(nonatomic) _Bool hasMenuWidget; // @synthesize hasMenuWidget=_hasMenuWidget;
@property(nonatomic) _Bool userCanCrosspost; // @synthesize userCanCrosspost=_userCanCrosspost;
@property(retain, nonatomic) SubredditMenuSet *menuSet; // @synthesize menuSet=_menuSet;
@property(retain, nonatomic) SubredditWidgetSet *widgetSet; // @synthesize widgetSet=_widgetSet;
@property(retain, nonatomic) StructuredStyle *style; // @synthesize style=_style;
@property(nonatomic) _Bool isDefaultBanner; // @synthesize isDefaultBanner=_isDefaultBanner;
@property(nonatomic) _Bool isDefaultProfileIcon; // @synthesize isDefaultProfileIcon=_isDefaultProfileIcon;
@property(nonatomic) unsigned long long suggestedCommentSort; // @synthesize suggestedCommentSort=_suggestedCommentSort;
@property(nonatomic) unsigned long long feedRange; // @synthesize feedRange=_feedRange;
@property(nonatomic) unsigned long long feedSort; // @synthesize feedSort=_feedSort;
@property(nonatomic) unsigned long long feedMode; // @synthesize feedMode=_feedMode;
@property(copy, nonatomic) NSString *submissionType; // @synthesize submissionType=_submissionType;
@property(nonatomic) _Bool allowPolls; // @synthesize allowPolls=_allowPolls;
@property(nonatomic) _Bool allowGifs; // @synthesize allowGifs=_allowGifs;
@property(nonatomic) _Bool allowVideos; // @synthesize allowVideos=_allowVideos;
@property(nonatomic) _Bool allowImages; // @synthesize allowImages=_allowImages;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) long long notificationLevel; // @synthesize notificationLevel=_notificationLevel;
@property(nonatomic) _Bool isChatPostFeatureEnabled; // @synthesize isChatPostFeatureEnabled=_isChatPostFeatureEnabled;
@property(nonatomic) _Bool isChatPostCreationAllowed; // @synthesize isChatPostCreationAllowed=_isChatPostCreationAllowed;
@property(nonatomic) _Bool isEnrolledInNewModmail; // @synthesize isEnrolledInNewModmail=_isEnrolledInNewModmail;
@property(nonatomic) _Bool isModeratable; // @synthesize isModeratable=_isModeratable;
@property(nonatomic) _Bool isQuarantined; // @synthesize isQuarantined=_isQuarantined;
@property(nonatomic) _Bool isNSFW; // @synthesize isNSFW=_isNSFW;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(nonatomic) long long activeCount; // @synthesize activeCount=_activeCount;
@property(nonatomic) long long subscribersCount; // @synthesize subscribersCount=_subscribersCount;
@property(nonatomic) long long subredditType; // @synthesize subredditType=_subredditType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(copy, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(copy, nonatomic) NSString *submitText; // @synthesize submitText=_submitText;
@property(copy, nonatomic) NSString *visualName; // @synthesize visualName=_visualName;
@property(copy, nonatomic) NSString *displayNamePrefixed; // @synthesize displayNamePrefixed=_displayNamePrefixed;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *publicDescriptionText; // @synthesize publicDescriptionText=_publicDescriptionText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) UIColor *bannerBackgroundColor; // @synthesize bannerBackgroundColor=_bannerBackgroundColor;
@property(retain, nonatomic) NSURL *bannerBackgroundImageURL; // @synthesize bannerBackgroundImageURL=_bannerBackgroundImageURL;
@property(retain, nonatomic) NSURL *mobileBannerBackgroundImageURL; // @synthesize mobileBannerBackgroundImageURL=_mobileBannerBackgroundImageURL;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(copy, nonatomic) NSString *communityIconURLString; // @synthesize communityIconURLString=_communityIconURLString;
@property(retain, nonatomic) UIColor *preferredColor; // @synthesize preferredColor=_preferredColor;
@property(copy, nonatomic) NSString *bannerImageURLString; // @synthesize bannerImageURLString=_bannerImageURLString;
@property(copy, nonatomic) NSString *iconImageURLString; // @synthesize iconImageURLString=_iconImageURLString;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *sharingPermalinkIncludingDomain;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureWithGraphQLProfileData:(id)arg1;
- (void)configureWithGraphQLData:(id)arg1;
- (void)configureWithData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
