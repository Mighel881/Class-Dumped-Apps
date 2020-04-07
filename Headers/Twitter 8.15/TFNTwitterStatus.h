//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSItemProviderWriting-Protocol.h>
#import <T1Twitter/T1PeopleDiscoveryScribableItem-Protocol.h>
#import <T1Twitter/T1PlayerFactoryIdentifiable-Protocol.h>
#import <T1Twitter/T1StatusViewModel-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerSessionSource-Protocol.h>
#import <T1Twitter/TFNTwitterCanonicalTimelineStatus-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceObject-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceProvider-Protocol.h>
#import <T1Twitter/TFNTwitterFeedbackInfoSource-Protocol.h>
#import <T1Twitter/TFNTwitterMutableDismissibleItem-Protocol.h>
#import <T1Twitter/TFNTwitterTimelineObject-Protocol.h>
#import <T1Twitter/TFNTwitterUserRelatable-Protocol.h>
#import <T1Twitter/TFSDateComparable-Protocol.h>
#import <T1Twitter/TFSModel-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, T1PlayerSessionProducer, TAVAnalyticsMediaIdentifier, TFNTwitterCanonicalStatus, TFNTwitterCardData, TFNTwitterDisplayTextModel, TFNTwitterDynamicVideoAd, TFNTwitterFeedbackInfo, TFNTwitterFeedbackModule, TFNTwitterGeotag, TFNTwitterPromotedContent, TFNTwitterRelevancePrompt, TFNTwitterStatusConversationContext, TFNTwitterSuggestsInfo, TFNTwitterTweetDetailsScribeItem, TFNTwitterTweetPrompt, TFNTwitterUser, TFSTwitterCameraMoment, TFSTwitterEntitySet, TFSTwitterEntityURL, TFSTwitterMediaInfo, TFSTwitterUserReference, TFSTwitterVideoMonetizationSettings, TFSURTImageVariant, TFSURTRichText, TFSURTUrl, UIColor, UIDragItem;
@protocol T1PlayerFactoryIdentifiable, T1StatusViewModel, TFNTwitterAVPlayerSessionSource, TFNTwitterCardDataSource, TFNTwitterConversationStructure, TFNTwitterStatusBanner, TFNTwitterStatusConversationTreeContext, TFNTwitterStatusSocialContext, TFNTwitterTimelineEntryContext;

@interface TFNTwitterStatus : NSObject <T1StatusViewModel, T1PlayerFactoryIdentifiable, T1PeopleDiscoveryScribableItem, NSCoding, TFNTwitterCanonicalTimelineStatus, TFSTwitterScribableItem, TFSDateComparable, TFNTwitterUserRelatable, TFNTwitterMutableDismissibleItem, TFNTwitterCardDataSourceObject, TFNTwitterCardDataSourceProvider, TFNTwitterAVPlayerSessionSource, TFNTwitterTimelineObject, TFSModel, TFNTwitterFeedbackInfoSource, NSItemProviderWriting>
{
    NSString *_unifiedID;
    TFNTwitterStatusConversationContext *_conversationContext;
    TFNTwitterDisplayTextModel *_displayTextModel;
    TFNTwitterDisplayTextModel *_withheldDisplayTextModel;
    _Bool _dismissing;
    _Bool _isRTBCreative;
    _Bool _didPrepare;
    _Bool _innerTombstoneDismissed;
    _Bool _outerTombstoneDismissed;
    _Bool _hasReplyBadge;
    _Bool _hasModeratedReplies;
    _Bool _isPinned;
    _Bool _isIncompleteLongFormTweet;
    _Bool _hasQuotePivot;
    _Bool _isConversationAncestor;
    _Bool _isConversationModuleGap;
    _Bool _isConversationFocalStatus;
    _Bool _isConversationPrecededByAncestor;
    _Bool _isConversationRoot;
    _Bool _hasForwardPivot;
    _Bool _hasSoftIntervention;
    _Bool _derivedSocialContextInitialized;
    TFNTwitterFeedbackInfo *_feedbackInfo;
    NSArray *_collectionStatuses;
    TFNTwitterUser *_fromUser;
    TFNTwitterCanonicalStatus *_canonicalStatus;
    long long _quoteID;
    TFNTwitterStatus *_quotedStatus;
    TFNTwitterPromotedContent *_promotedContent;
    TFNTwitterDynamicVideoAd *_prerollContent;
    TFNTwitterStatus *_retweetedStatus;
    TFNTwitterStatus *_retweetingStatus;
    NSDate *_fakeDate;
    long long _collectionID;
    NSString *_collectionURL;
    TFNTwitterStatus *_outerCollectionStatus;
    id <TFNTwitterTimelineEntryContext> _timelineEntryContext;
    long long _timelineSortIndex;
    id <TFNTwitterStatusSocialContext> _socialContext;
    NSString *_contextReasonIconType;
    NSString *_contextReasonText;
    NSString *_conversationControlText;
    NSString *_conversationControlDescription;
    NSString *_conversationControlBadgeName;
    TFSURTUrl *_conversationControlContextURL;
    TFSURTRichText *_innerTombstoneRichText;
    TFSURTRichText *_innerTombstoneRichRevealText;
    TFSURTRichText *_outerTombstoneRichText;
    TFSURTRichText *_outerTombstoneRichRevealText;
    NSString *_replyBadgeText;
    UIColor *_replyBadgeBackgroundColor;
    id <TFNTwitterStatusConversationTreeContext> _conversationTreeContext;
    id <TFNTwitterStatusBanner> _banner;
    TFNTwitterSuggestsInfo *_suggestsInfo;
    TFNTwitterFeedbackModule *_feedbackModule;
    TFNTwitterTweetPrompt *_tweetPrompt;
    TFNTwitterRelevancePrompt *_relevancePrompt;
    NSString *_momentID;
    NSString *_debugString;
    NSDictionary *_scribeItemForGuideDetails;
    double _score;
    long long _draftTweetID;
    TFSTwitterVideoMonetizationSettings *_videoMonetizationSettings;
    long long _minSpacing;
    TFSURTRichText *_quotePivotDisplayText;
    NSString *_conversationSection;
    id <TFNTwitterConversationStructure> _conversationPayload;
    long long _conversationFocalStatusID;
    TFSURTImageVariant *_forwardPivotImageVariant;
    TFSURTRichText *_forwardPivotText;
    NSString *_forwardPivotBadgeText;
    UIColor *_forwardPivotBadgeTextColor;
    NSString *_forwardPivotBadgeTextColorName;
    NSString *_forwardPivotLandingUrlString;
    NSString *_forwardPivotDisplayType;
    NSString *_forwardPivotAccessibilityString;
    long long _authenticatedUserID;
    CDStruct_c9ea5807 _flags;
    TFNTwitterCardData *_contextualCardData;
}

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (_Bool)t1_isCanonicalStatusValid:(id)arg1 isRTBCreative:(_Bool)arg2;
+ (id)statusesByIdDictionaryWithStatusesArray:(id)arg1;
+ (id)statusesByIdDictionaryWithJSONDictionary:(id)arg1 users:(id)arg2;
+ (id)statusesByIdDictionaryWithJSONData:(id)arg1 error:(out id *)arg2;
+ (id)statusesWithJSONData:(id)arg1 error:(out id *)arg2;
+ (id)statusesWithJSONArray:(id)arg1 users:(id)arg2;
+ (id)statusesWithJSONArray:(id)arg1;
+ (id)testStatusWithJSONData:(id)arg1 statusID:(long long)arg2 users:(id)arg3 error:(out id *)arg4;
+ (id)statusWithJSONData:(id)arg1 hasValidCanonicalStatus:(_Bool)arg2 error:(out id *)arg3;
+ (_Bool)shouldDisplayWithheldInCountryInterstitialForStatus:(id)arg1 account:(id)arg2;
+ (_Bool)shouldSuppressContentForStatus:(id)arg1 account:(id)arg2;
@property(retain, nonatomic) TFNTwitterCardData *contextualCardData; // @synthesize contextualCardData=_contextualCardData;
@property(nonatomic) _Bool derivedSocialContextInitialized; // @synthesize derivedSocialContextInitialized=_derivedSocialContextInitialized;
@property(nonatomic) CDStruct_c9ea5807 flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) long long authenticatedUserID; // @synthesize authenticatedUserID=_authenticatedUserID;
@property(retain, nonatomic) NSString *forwardPivotAccessibilityString; // @synthesize forwardPivotAccessibilityString=_forwardPivotAccessibilityString;
@property(retain, nonatomic) NSString *forwardPivotDisplayType; // @synthesize forwardPivotDisplayType=_forwardPivotDisplayType;
@property(retain, nonatomic) NSString *forwardPivotLandingUrlString; // @synthesize forwardPivotLandingUrlString=_forwardPivotLandingUrlString;
@property(retain, nonatomic) NSString *forwardPivotBadgeTextColorName; // @synthesize forwardPivotBadgeTextColorName=_forwardPivotBadgeTextColorName;
@property(retain, nonatomic) UIColor *forwardPivotBadgeTextColor; // @synthesize forwardPivotBadgeTextColor=_forwardPivotBadgeTextColor;
@property(retain, nonatomic) NSString *forwardPivotBadgeText; // @synthesize forwardPivotBadgeText=_forwardPivotBadgeText;
@property(retain, nonatomic) TFSURTRichText *forwardPivotText; // @synthesize forwardPivotText=_forwardPivotText;
@property(retain, nonatomic) TFSURTImageVariant *forwardPivotImageVariant; // @synthesize forwardPivotImageVariant=_forwardPivotImageVariant;
@property(nonatomic) _Bool hasSoftIntervention; // @synthesize hasSoftIntervention=_hasSoftIntervention;
@property(nonatomic) _Bool hasForwardPivot; // @synthesize hasForwardPivot=_hasForwardPivot;
@property(nonatomic) long long conversationFocalStatusID; // @synthesize conversationFocalStatusID=_conversationFocalStatusID;
@property(nonatomic) _Bool isConversationRoot; // @synthesize isConversationRoot=_isConversationRoot;
@property(nonatomic) _Bool isConversationPrecededByAncestor; // @synthesize isConversationPrecededByAncestor=_isConversationPrecededByAncestor;
@property(nonatomic) _Bool isConversationFocalStatus; // @synthesize isConversationFocalStatus=_isConversationFocalStatus;
@property(nonatomic) _Bool isConversationModuleGap; // @synthesize isConversationModuleGap=_isConversationModuleGap;
@property(nonatomic) _Bool isConversationAncestor; // @synthesize isConversationAncestor=_isConversationAncestor;
@property(retain, nonatomic) id <TFNTwitterConversationStructure> conversationPayload; // @synthesize conversationPayload=_conversationPayload;
@property(retain, nonatomic) NSString *conversationSection; // @synthesize conversationSection=_conversationSection;
@property(retain, nonatomic) TFSURTRichText *quotePivotDisplayText; // @synthesize quotePivotDisplayText=_quotePivotDisplayText;
@property(nonatomic) _Bool hasQuotePivot; // @synthesize hasQuotePivot=_hasQuotePivot;
@property(nonatomic) long long minSpacing; // @synthesize minSpacing=_minSpacing;
@property(retain, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings; // @synthesize videoMonetizationSettings=_videoMonetizationSettings;
@property(nonatomic) long long draftTweetID; // @synthesize draftTweetID=_draftTweetID;
@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) _Bool isIncompleteLongFormTweet; // @synthesize isIncompleteLongFormTweet=_isIncompleteLongFormTweet;
@property(retain, nonatomic) NSDictionary *scribeItemForGuideDetails; // @synthesize scribeItemForGuideDetails=_scribeItemForGuideDetails;
@property(copy, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(retain, nonatomic) TFNTwitterRelevancePrompt *relevancePrompt; // @synthesize relevancePrompt=_relevancePrompt;
@property(retain, nonatomic) TFNTwitterTweetPrompt *tweetPrompt; // @synthesize tweetPrompt=_tweetPrompt;
@property(retain, nonatomic) TFNTwitterFeedbackModule *feedbackModule; // @synthesize feedbackModule=_feedbackModule;
@property(retain, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(nonatomic) _Bool isPinned; // @synthesize isPinned=_isPinned;
@property(retain, nonatomic) id <TFNTwitterStatusBanner> banner; // @synthesize banner=_banner;
@property(retain, nonatomic) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext; // @synthesize conversationTreeContext=_conversationTreeContext;
@property(nonatomic) _Bool hasModeratedReplies; // @synthesize hasModeratedReplies=_hasModeratedReplies;
@property(retain, nonatomic) UIColor *replyBadgeBackgroundColor; // @synthesize replyBadgeBackgroundColor=_replyBadgeBackgroundColor;
@property(copy, nonatomic) NSString *replyBadgeText; // @synthesize replyBadgeText=_replyBadgeText;
@property(nonatomic) _Bool hasReplyBadge; // @synthesize hasReplyBadge=_hasReplyBadge;
@property(retain, nonatomic) TFSURTRichText *outerTombstoneRichRevealText; // @synthesize outerTombstoneRichRevealText=_outerTombstoneRichRevealText;
@property(retain, nonatomic) TFSURTRichText *outerTombstoneRichText; // @synthesize outerTombstoneRichText=_outerTombstoneRichText;
@property(nonatomic, getter=isOuterTombstoneDismissed) _Bool outerTombstoneDismissed; // @synthesize outerTombstoneDismissed=_outerTombstoneDismissed;
@property(retain, nonatomic) TFSURTRichText *innerTombstoneRichRevealText; // @synthesize innerTombstoneRichRevealText=_innerTombstoneRichRevealText;
@property(retain, nonatomic) TFSURTRichText *innerTombstoneRichText; // @synthesize innerTombstoneRichText=_innerTombstoneRichText;
@property(nonatomic, getter=isInnerTombstoneDismissed) _Bool innerTombstoneDismissed; // @synthesize innerTombstoneDismissed=_innerTombstoneDismissed;
@property(retain, nonatomic) TFSURTUrl *conversationControlContextURL; // @synthesize conversationControlContextURL=_conversationControlContextURL;
@property(copy, nonatomic) NSString *conversationControlBadgeName; // @synthesize conversationControlBadgeName=_conversationControlBadgeName;
@property(copy, nonatomic) NSString *conversationControlDescription; // @synthesize conversationControlDescription=_conversationControlDescription;
@property(copy, nonatomic) NSString *conversationControlText; // @synthesize conversationControlText=_conversationControlText;
@property(readonly, copy, nonatomic) NSString *contextReasonText; // @synthesize contextReasonText=_contextReasonText;
@property(readonly, copy, nonatomic) NSString *contextReasonIconType; // @synthesize contextReasonIconType=_contextReasonIconType;
@property(retain, nonatomic) id <TFNTwitterStatusSocialContext> socialContext; // @synthesize socialContext=_socialContext;
@property(nonatomic) long long timelineSortIndex; // @synthesize timelineSortIndex=_timelineSortIndex;
@property(retain, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext; // @synthesize timelineEntryContext=_timelineEntryContext;
@property(readonly, nonatomic) _Bool didPrepare; // @synthesize didPrepare=_didPrepare;
@property(nonatomic) __weak TFNTwitterStatus *outerCollectionStatus; // @synthesize outerCollectionStatus=_outerCollectionStatus;
@property(retain, nonatomic) NSString *collectionURL; // @synthesize collectionURL=_collectionURL;
@property(nonatomic) long long collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSDate *fakeDate; // @synthesize fakeDate=_fakeDate;
@property(readonly, nonatomic) __weak TFNTwitterStatus *retweetingStatus; // @synthesize retweetingStatus=_retweetingStatus;
@property(retain, nonatomic) TFNTwitterStatus *retweetedStatus; // @synthesize retweetedStatus=_retweetedStatus;
@property(retain, nonatomic) TFNTwitterDynamicVideoAd *prerollContent; // @synthesize prerollContent=_prerollContent;
@property(retain, nonatomic) TFNTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(retain, nonatomic) TFNTwitterStatus *quotedStatus; // @synthesize quotedStatus=_quotedStatus;
@property(nonatomic) long long quoteID; // @synthesize quoteID=_quoteID;
@property(readonly, nonatomic) TFNTwitterCanonicalStatus *canonicalStatus; // @synthesize canonicalStatus=_canonicalStatus;
@property(retain, nonatomic) TFNTwitterUser *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo; // @synthesize feedbackInfo=_feedbackInfo;
@property(readonly, nonatomic, getter=isDismissing) _Bool dismissing;
- (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isEqualToStatus:(id)arg1 differentProperties:(out id *)arg2;
- (id)_tfn_displayTextKeyForKey:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithStatus:(id)arg1 outerCollectionStatus:(id)arg2 includeContextObjects:(_Bool)arg3;
- (id)mutableCopyIncludingContextObjects:(_Bool)arg1;
@property(readonly, nonatomic) NSString *dynamicAdsScribeValue;
@property(readonly, nonatomic) _Bool isIncompleteQuotedStatus;
@property(readonly, nonatomic) _Bool isMediaForwardQuoteStatus;
@property(readonly, nonatomic) _Bool isQuoteStatus;
@property(readonly, nonatomic) _Bool isQuoted;
@property(readonly, nonatomic, getter=hasContextReason) _Bool contextReason;
@property(readonly, nonatomic) NSString *textWithExpandedURLs;
@property(readonly, nonatomic) NSString *twitterURL;
@property(readonly, nonatomic) NSString *twitterStatusesURL;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly, nonatomic) NSString *scribeElementAccountingForQuoteTweet;
@property(readonly, nonatomic) NSDictionary *extraScribeItem;
@property(readonly, nonatomic) NSDictionary *scribeItemForQuotedTweet;
@property(readonly, nonatomic) TFNTwitterTweetDetailsScribeItem *tweetDetailsScribeItem;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
- (id)scribeItemContentID;
- (id)scribeItemFirstImpressionID;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, nonatomic) NSDictionary *scribeParameters;
@property(readonly, copy, nonatomic) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property(readonly, nonatomic) _Bool shouldBeRenderedFromRight;
@property(readonly, nonatomic) TFNTwitterStatusConversationContext *conversationContext;
@property(readonly, nonatomic) _Bool isSelfReply;
@property(readonly) _Bool isReplyAndShouldShowSocialContext;
@property(readonly) _Bool isConversationSingleBranchedReplyStatus;
@property(readonly) _Bool isConversationStatus;
@property(readonly, nonatomic) _Bool isScheduledBroadcast;
@property(readonly, nonatomic) _Bool isBroadcast;
@property(readonly, nonatomic) _Bool isLiveEvent;
@property(readonly, nonatomic) _Bool isMomentCard;
@property(readonly, nonatomic) _Bool isSurvey;
@property(readonly, nonatomic) _Bool isPoll;
@property(readonly, nonatomic) _Bool isPeriscope;
@property(readonly, nonatomic) _Bool isVine;
@property(readonly, nonatomic) _Bool allowDynamicAd;
@property(readonly, nonatomic) _Bool isAdsVideoCard;
@property(readonly, nonatomic) _Bool isYouTubeCard;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) _Bool isMediaEntityVideo;
@property(readonly, nonatomic) _Bool isGIF;
@property(readonly, nonatomic) _Bool isAmplifyCardVideo;
@property(readonly, nonatomic) long long fromUserID;
@property(readonly, nonatomic) TFNTwitterStatus *playerStatus;
@property(readonly, nonatomic) NSNumber *playerStatusID;
@property(readonly, nonatomic) UIDragItem *dragItem;
@property(readonly, nonatomic) TFSTwitterCameraMoment *cameraMoment;
@property(readonly, nonatomic) long long displayQuoteCount;
@property(readonly, nonatomic) TFSTwitterEntityURL *quotedStatusPermalinkEntity;
@property(readonly, nonatomic) NSString *composerSource;
@property(readonly, nonatomic) _Bool isSelfThreadStatus;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isUserRecommendation;
@property(readonly, nonatomic) _Bool isRTBCreative; // @synthesize isRTBCreative=_isRTBCreative;
@property(readonly, nonatomic) _Bool isIssueAd;
@property(readonly, nonatomic) _Bool isPoliticalAd;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) _Bool isReply;
@property(readonly, nonatomic) _Bool isRetweetByAuthenticatedUser;
@property(readonly) _Bool isRetweetedReply;
@property(readonly, nonatomic) _Bool isRetweetAndShouldShowSocialContext;
@property(readonly, nonatomic) _Bool isRetweet;
@property(readonly, nonatomic) NSString *retweetedByAccessibilityLabel;
- (id)accessibilityTextForOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) NSArray *mediaForwardStatuses;
@property(readonly, nonatomic) TFNTwitterStatus *mediaForwardStatus;
@property(readonly, nonatomic) TFNTwitterStatus *representeeStatus;
@property(readonly, nonatomic) TFNTwitterStatus *representedStatus;
@property(readonly, nonatomic) NSDate *comparableDate;
@property(readonly, nonatomic) TFNTwitterUser *retweetedBy;
@property(readonly, nonatomic) NSArray *hiddenURLEntities;
@property(readonly, nonatomic) NSArray *hiddenMentionEntities;
@property(readonly, nonatomic) NSArray *usernames;
@property(readonly, nonatomic) struct _NSRange displayTextRange;
@property(readonly, nonatomic) unsigned long long displayTextOffset;
@property(readonly, nonatomic) NSString *displayText;
@property(readonly, nonatomic) NSString *fullText;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *statusIDString;
@property(readonly, nonatomic) NSNumber *statusIDNumber;
- (id)entityForURL:(id)arg1;
- (id)cardDataSourceForCollectionCardData:(id)arg1;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, copy, nonatomic) NSString *senderDisplayFullName;
@property(readonly, copy, nonatomic) NSString *senderDisplayUsername;
@property(readonly, nonatomic) long long senderID;
@property(readonly, nonatomic) NSNumber *sourceID;
@property(readonly, nonatomic) unsigned long long dismissibleContentType;
- (void)setDismissing:(_Bool)arg1;
@property(readonly, nonatomic, getter=isDismissible) _Bool dismissible;
- (void)removeTaggedUserWithUserID:(long long)arg1;
@property(readonly, nonatomic) _Bool primaryMediaRequiresAttribution;
@property(readonly, nonatomic) NSNumber *mediaScribeType;
@property(readonly, nonatomic) NSNumber *mediaScribePublisherID;
@property(readonly, nonatomic) NSString *mediaPlaylistUrl;
@property(readonly, nonatomic) NSString *mediaScribeContentID;
- (id)mediaUserWithUserIDIsTaggedIn:(long long)arg1;
@property(readonly, nonatomic) NSArray *inlineMediaInfos;
@property(readonly, nonatomic) NSNumber *primaryMediaOwnerID;
@property(readonly, nonatomic) TFSTwitterUserReference *primaryMediaOwnerReference;
@property(readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property(readonly, nonatomic) long long primaryCardType;
@property(readonly, nonatomic) unsigned long long primaryMediaType;
@property(readonly, nonatomic) NSString *primaryMediaVideoURL;
@property(readonly, nonatomic) _Bool isFollowForwardTweet;
@property(nonatomic) unsigned long long autoExpandMode;
@property(nonatomic) _Bool hasRecordedDwellImpression;
@property(nonatomic) _Bool hasRecordedImpression;
@property(readonly, nonatomic) _Bool seenAsFavorited;
@property(readonly, nonatomic) _Bool seenAsRetweeted;
- (void)_tfn_removeObserverForChildStatus:(id)arg1;
- (void)_tfn_removeObserverForQuotedStatus;
- (void)_tfn_removeObserverForCanonicalStatus;
- (void)_tfn_handleChildStatusUpdateNotification:(id)arg1;
- (void)_tfn_addObserverForChildStatus:(id)arg1;
- (void)_tfn_addObserverForQuotedStatus;
- (void)_tfn_addObserverForCanonicalStatus;
- (id)displayTextPlaceRangesForOptions:(unsigned long long)arg1;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)arg1;
- (id)displayTextHashflagsForOptions:(unsigned long long)arg1;
- (id)displayTextURLRangesForOptions:(unsigned long long)arg1;
- (id)displayTextRangesForOptions:(unsigned long long)arg1;
- (id)_displayText;
- (id)displayTextForOptions:(unsigned long long)arg1;
- (void)updateCollectionItemsWithStatuses:(id)arg1;
@property(readonly, nonatomic) _Bool hasCollectionItems;
@property(readonly, nonatomic) NSArray *collectionCardDataItems;
@property(readonly, nonatomic) NSArray *collectionStatuses; // @synthesize collectionStatuses=_collectionStatuses;
- (id)firstStatusInRetweetChain;
@property(readonly, nonatomic) long long selfThreadID;
@property(readonly, nonatomic) long long conversationID;
@property(readonly, copy, nonatomic) NSString *limitedActions;
@property(readonly, nonatomic) NSString *sourceWithoutHTMLTags;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) _Bool isWithheld;
@property(nonatomic) _Bool favoritedByLoadingAccount;
@property(readonly, nonatomic) NSString *supplementalLanguage;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *withheldScope;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldEntities;
@property(readonly, copy, nonatomic) NSString *withheldText;
@property(readonly, nonatomic) NSArray *withheldInCountries;
@property(readonly, nonatomic) long long replyCount;
@property(readonly, nonatomic) long long favoriteCount;
@property(readonly, nonatomic) long long retweetCount;
@property(readonly, nonatomic) long long retweetID;
@property(readonly, nonatomic) unsigned long long encodedDisplayTextLength;
@property(readonly, nonatomic) _Bool renderAsAttachmentTombstone;
@property(readonly, nonatomic) _Bool isLimitedActionsNonCompliant;
@property(readonly, nonatomic) _Bool isPossiblySensitive;
@property(readonly, nonatomic) _Bool isConversationMuted;
@property(readonly, nonatomic) TFNTwitterCardData *cardData;
@property(readonly, nonatomic) NSString *cardDataURL;
@property(readonly, nonatomic) TFSTwitterEntitySet *entities;
@property(readonly, nonatomic) TFNTwitterGeotag *geotag;
- (long long)quotedStatusID;
@property(readonly, nonatomic) NSString *inReplyToUsername;
@property(readonly, nonatomic) long long inReplyToUserID;
@property(readonly, nonatomic) long long inReplyToStatusID;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSString *originalText;
@property(readonly, nonatomic) long long statusID;
- (_Bool)_tfn_shouldOmitCardURLForCardData:(id)arg1;
- (id)_encodedDisplayText;
- (id)allUsers;
- (id)_tfn_displayTextModelForOptions:(unsigned long long)arg1;
- (id)attributedTextModelForOptions:(unsigned long long)arg1 width:(double)arg2 withFont:(id)arg3 boldFont:(id)arg4 lineHeight:(double)arg5 lineSpacing:(double)arg6 emptyLineMaxHeight:(double)arg7 darkBackground:(_Bool)arg8 defaultTextColor:(id)arg9 linkTextColor:(id)arg10 highlighted:(_Bool)arg11 truncationString:(id)arg12 cachingEnabled:(_Bool)arg13;
- (long long)attributedDisplayTextHeightForOptions:(unsigned long long)arg1 withWidth:(double)arg2 font:(id)arg3 boldFont:(id)arg4 lineHeight:(double)arg5 lineSpacing:(double)arg6 emptyLineMaxHeight:(double)arg7 darkBackground:(_Bool)arg8 defaultTextColor:(id)arg9 linkTextColor:(id)arg10 truncationString:(id)arg11 cachingEnabled:(_Bool)arg12;
- (_Bool)isRelatedToUser:(id)arg1;
- (_Bool)isGap;
- (_Bool)isNotADummyStatus;
- (long long)compare:(id)arg1;
- (long long)reverseCompare:(id)arg1;
- (void)prepareWithAuthenticatedAccountUserID:(long long)arg1;
- (void)replaceCanonicalStatusForAssimilation:(id)arg1;
- (id)assimilateLivePipelineEventPayload:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *unifiedID;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2 hasValidCanonicalStatus:(_Bool)arg3 isRTBCreative:(_Bool)arg4;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2 hasValidCanonicalStatus:(_Bool)arg3;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2 statusID:(long long)arg3 outerCollectionStatus:(id)arg4 hasValidCanonicalStatus:(_Bool)arg5 isRTBCreative:(_Bool)arg6;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2 statusID:(long long)arg3 hasValidCanonicalStatus:(_Bool)arg4 isRTBCreative:(_Bool)arg5;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2 statusID:(long long)arg3 hasValidCanonicalStatus:(_Bool)arg4;
- (id)initWithCanonicalStatus:(id)arg1 fromUser:(id)arg2 retweetedStatus:(id)arg3 quotedStatus:(id)arg4;
- (id)initWithCanonicalStatus:(id)arg1 fromUser:(id)arg2 hasValidCanonicalStatus:(_Bool)arg3;
- (id)initWithCanonicalStatus:(id)arg1 fromUser:(id)arg2;
- (id)momentsRangesWithOptions:(unsigned long long)arg1 truncationRange:(id)arg2;
- (id)momentsDisplayAttributedStringWithOptions:(unsigned long long)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 truncationRange:(id)arg5 hasCTA:(_Bool)arg6;
- (_Bool)_rangeHasColisionWithHashflag:(struct _NSRange)arg1 options:(unsigned long long)arg2;
- (_Bool)_removeTrailingCharacterSet:(id)arg1 fromAttributedString:(id)arg2;
- (_Bool)_removeTrailingCharacterSet:(id)arg1 fromString:(id)arg2;
@property(readonly, nonatomic) _Bool shouldOmitCollectionLink;
@property(readonly, nonatomic) _Bool shouldShowCollectionCarousel;
- (_Bool)isSelfThreadTweet;
@property(readonly, nonatomic, getter=isFillerTweet) _Bool fillerTweet;
@property(readonly, nonatomic, getter=displayAsSelfThreadTweet) _Bool selfThreadTweet;
- (id)representedFromUser;
- (_Bool)hasTwitterMediaIncludingPartners:(unsigned long long)arg1 forAccount:(id)arg2;
- (_Bool)isVideoPoll;
@property(readonly, nonatomic, getter=isAdPreviewTweet) _Bool adPreviewTweet;
@property(readonly, nonatomic) TFNTwitterGeotag *representedGeotag;
@property(readonly, nonatomic) long long representedStatusID;
@property(readonly, nonatomic) NSString *representedFromUserName;
@property(readonly, nonatomic) long long representedFromUserID;
@property(readonly, nonatomic) _Bool displayAsFollowForwardTweet;
@property(readonly, nonatomic) _Bool displayAsMomentTimelineTweet;
@property(readonly, nonatomic) _Bool displayAsMomentTweet;
@property(readonly, nonatomic) _Bool displayAsNewsCameraTweet;
@property(readonly, nonatomic) _Bool shouldRenderAsAttachmentTombstone;
@property(readonly, nonatomic) _Bool isLimitedActionsNonCompliantViewModel;
@property(readonly, nonatomic) _Bool isPossiblySensitiveViewModel;
@property(readonly, nonatomic) _Bool displayAsWithheld;
@property(readonly, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) long long displayReplyCount;
@property(readonly, nonatomic) long long displayRetweetCount;
@property(readonly, nonatomic) long long displayFavoriteCount;
@property(readonly, nonatomic) _Bool displayAsRetweeted;
@property(readonly, nonatomic) _Bool displayAsFavorited;
@property(readonly, nonatomic) id <T1StatusViewModel> mediaForwardViewModel;
@property(readonly, nonatomic) id <T1StatusViewModel> quotedStatusViewModel;
@property(readonly, nonatomic) id <T1PlayerFactoryIdentifiable> playerFactoryIdentifiable;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
@property(readonly, nonatomic) TFNTwitterCardData *representedCardData;
- (id)cardEvent;
- (_Bool)isAttachmentTypePhotoOrVideo:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *limitedActionsPolicy;
@property(readonly, nonatomic) _Bool hasReplyBadgeIcon;
@property(readonly, nonatomic) unsigned long long replyBadgeType;
@property(readonly, nonatomic) NSString *advertiserName;
@property(readonly, nonatomic) _Bool isFromUserAffiliated;
@property(readonly, nonatomic) _Bool isFromUserUsernameless;
@property(readonly, nonatomic) _Bool isFromUserVerified;
@property(readonly, nonatomic) _Bool isFromUserProtected;
@property(readonly, nonatomic) _Bool isTweetedByAuthenticatedAccount;
@property(readonly, nonatomic) NSString *fromUserFullName;
@property(readonly, nonatomic) NSString *fromUserName;
@property(readonly, nonatomic) unsigned long long designatorLabelType;
@property(readonly, nonatomic) unsigned long long designatorIconType;
@property(readonly, nonatomic) NSString *designatorUrl;
@property(readonly, nonatomic) NSString *designatorImageUrl;
@property(readonly, nonatomic) NSString *designatorString;
- (void)syncLastDisplayCounts;
- (void)setLastDisplayReplyCount:(long long)arg1;
@property(readonly, nonatomic) long long lastDisplayReplyCount;
- (void)setLastDisplayRetweetCount:(long long)arg1;
@property(readonly, nonatomic) long long lastDisplayRetweetCount;
- (void)setLastDisplayFavoriteCount:(long long)arg1;
@property(readonly, nonatomic) long long lastDisplayFavoriteCount;
@property(readonly, nonatomic) NSString *statusItemViewModelDidUpdateNotificationName;
@property(readonly, nonatomic) TFNTwitterStatus *legacyStatus;
@property(readonly, nonatomic) T1PlayerSessionProducer *playerSessionProducer;
- (id)playerID;
- (_Bool)shouldShowQuotedTweetForAccount:(id)arg1;
- (id)replyBadgeVectorImageName;
- (id)socialContextURL;
- (id)socialBadgeName;
- (id)conversationSocialText;
- (id)socialText;
@property(readonly, nonatomic) _Bool hasNonConversationSocialText;
- (id)tappableSocialContext;
- (id)attributedDisplayTextWithFont:(id)arg1 color:(id)arg2 selectedRanges:(id)arg3 options:(unsigned long long)arg4 account:(id)arg5;
- (unsigned long long)_displayTextOptionsForAccount:(id)arg1 viewController:(id)arg2;
- (id)tweetDetailsTextWithAccount:(id)arg1 viewController:(id)arg2 font:(id)arg3;
- (_Bool)shouldOpenMediaContentViewController;
- (id)updatedScribeParameters:(id)arg1;
@property(readonly, nonatomic) _Bool shouldOmitCardLink;
- (id)t1_peopleDiscoveryScribeElement;
- (id)t1_peopleDiscoveryScribeItemForItemIndex:(unsigned long long)arg1;
- (id)_tfn_displayTextModelWithheld:(_Bool)arg1;
@property(readonly, nonatomic) TFNTwitterDisplayTextModel *withheldDisplayTextModel; // @dynamic withheldDisplayTextModel;
@property(readonly, nonatomic) TFNTwitterDisplayTextModel *displayTextModel; // @dynamic displayTextModel;
- (id)tfs_debugStrings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) TFSTwitterEntityURL *trailingEntityURL;
- (void)hydratePromotedSocialContextUserReferencesWithUsersDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *twitterURLForCopy;
@property(readonly, nonatomic) NSString *twitterURLForEmail;
@property(readonly, nonatomic) NSString *twitterURLForShare;
- (id)emailBody;
- (id)emailSubject;
- (id)whyYoureSeeingThisAdURLString;

// Remaining properties
@property(readonly, nonatomic, getter=isConversationMuted) _Bool conversationMuted;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isSelfReply) _Bool selfReply;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end
