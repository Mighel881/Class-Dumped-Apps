//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GAMDActionData_LinkProperties, GAMDOcmDetails, NSString;

@interface GAMDActionData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool acceptedSuggestedTitle; // @dynamic acceptedSuggestedTitle;
@property(nonatomic) unsigned int applySpellcheckSuggestionRank; // @dynamic applySpellcheckSuggestionRank;
@property(nonatomic) unsigned int autocorrectSpellcheckSuggestionRank; // @dynamic autocorrectSpellcheckSuggestionRank;
@property(copy, nonatomic) NSString *braveheartThemeId; // @dynamic braveheartThemeId;
@property(nonatomic) _Bool checked; // @dynamic checked;
@property(nonatomic) int differenceFromSuggestedTitle; // @dynamic differenceFromSuggestedTitle;
@property(copy, nonatomic) NSString *documentLocale; // @dynamic documentLocale;
@property(copy, nonatomic) NSString *driveAppId; // @dynamic driveAppId;
@property(nonatomic) _Bool findUsingRegularExpressions; // @dynamic findUsingRegularExpressions;
@property(copy, nonatomic) NSString *fontFamily; // @dynamic fontFamily;
@property(nonatomic) unsigned int fontSizePts; // @dynamic fontSizePts;
@property(nonatomic) int fontWeight; // @dynamic fontWeight;
@property(nonatomic) _Bool hasAcceptedSuggestedTitle; // @dynamic hasAcceptedSuggestedTitle;
@property(nonatomic) _Bool hasApplySpellcheckSuggestionRank; // @dynamic hasApplySpellcheckSuggestionRank;
@property(nonatomic) _Bool hasAutocorrectSpellcheckSuggestionRank; // @dynamic hasAutocorrectSpellcheckSuggestionRank;
@property(nonatomic) _Bool hasBraveheartThemeId; // @dynamic hasBraveheartThemeId;
@property(nonatomic) _Bool hasChecked; // @dynamic hasChecked;
@property(nonatomic) _Bool hasDifferenceFromSuggestedTitle; // @dynamic hasDifferenceFromSuggestedTitle;
@property(nonatomic) _Bool hasDocumentLocale; // @dynamic hasDocumentLocale;
@property(nonatomic) _Bool hasDriveAppId; // @dynamic hasDriveAppId;
@property(nonatomic) _Bool hasFindUsingRegularExpressions; // @dynamic hasFindUsingRegularExpressions;
@property(nonatomic) _Bool hasFontFamily; // @dynamic hasFontFamily;
@property(nonatomic) _Bool hasFontSizePts; // @dynamic hasFontSizePts;
@property(nonatomic) _Bool hasFontWeight; // @dynamic hasFontWeight;
@property(nonatomic) _Bool hasHatsUseGcs; // @dynamic hasHatsUseGcs;
@property(nonatomic) _Bool hasHeading; // @dynamic hasHeading;
@property(nonatomic) _Bool hasIndentEndPts; // @dynamic hasIndentEndPts;
@property(nonatomic) _Bool hasIndentFirstLinePts; // @dynamic hasIndentFirstLinePts;
@property(nonatomic) _Bool hasIndentStartPts; // @dynamic hasIndentStartPts;
@property(nonatomic) _Bool hasIsDefaultTitle; // @dynamic hasIsDefaultTitle;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasLineSpacing; // @dynamic hasLineSpacing;
@property(nonatomic) _Bool hasLinkProperties; // @dynamic hasLinkProperties;
@property(nonatomic) _Bool hasMimeType; // @dynamic hasMimeType;
@property(nonatomic) _Bool hasNumQuestionsImported; // @dynamic hasNumQuestionsImported;
@property(nonatomic) _Bool hasNumRecipients; // @dynamic hasNumRecipients;
@property(nonatomic) _Bool hasNumRevisionDiffs; // @dynamic hasNumRevisionDiffs;
@property(nonatomic) _Bool hasOcm; // @dynamic hasOcm;
@property(nonatomic) _Bool hasPunchAudioMimeType; // @dynamic hasPunchAudioMimeType;
@property(nonatomic) _Bool hasPunchLayoutName; // @dynamic hasPunchLayoutName;
@property(nonatomic) _Bool hasPunchMasterId; // @dynamic hasPunchMasterId;
@property(nonatomic) _Bool hasReplacedRangesCount; // @dynamic hasReplacedRangesCount;
@property(nonatomic) _Bool hasShowRevisionsDiff; // @dynamic hasShowRevisionsDiff;
@property(nonatomic) _Bool hasSpellingLanguage; // @dynamic hasSpellingLanguage;
@property(nonatomic) _Bool hasSuggestedMultipleChoiceOptionsAccepted; // @dynamic hasSuggestedMultipleChoiceOptionsAccepted;
@property(nonatomic) _Bool hasSuggestedTitle; // @dynamic hasSuggestedTitle;
@property(nonatomic) _Bool hasSuggestedTitleLength; // @dynamic hasSuggestedTitleLength;
@property(nonatomic) _Bool hasTableNumCols; // @dynamic hasTableNumCols;
@property(nonatomic) _Bool hasTableNumRows; // @dynamic hasTableNumRows;
@property(nonatomic) _Bool hasUserTitleLength; // @dynamic hasUserTitleLength;
@property(nonatomic) _Bool hasVoiceCorrectionRank; // @dynamic hasVoiceCorrectionRank;
@property(nonatomic) _Bool hasZoomFactor; // @dynamic hasZoomFactor;
@property(nonatomic) _Bool hatsUseGcs; // @dynamic hatsUseGcs;
@property(nonatomic) unsigned int heading; // @dynamic heading;
@property(nonatomic) double indentEndPts; // @dynamic indentEndPts;
@property(nonatomic) double indentFirstLinePts; // @dynamic indentFirstLinePts;
@property(nonatomic) double indentStartPts; // @dynamic indentStartPts;
@property(nonatomic) _Bool isDefaultTitle; // @dynamic isDefaultTitle;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) double lineSpacing; // @dynamic lineSpacing;
@property(retain, nonatomic) GAMDActionData_LinkProperties *linkProperties; // @dynamic linkProperties;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(nonatomic) int numQuestionsImported; // @dynamic numQuestionsImported;
@property(nonatomic) int numRecipients; // @dynamic numRecipients;
@property(nonatomic) int numRevisionDiffs; // @dynamic numRevisionDiffs;
@property(retain, nonatomic) GAMDOcmDetails *ocm; // @dynamic ocm;
@property(copy, nonatomic) NSString *punchAudioMimeType; // @dynamic punchAudioMimeType;
@property(copy, nonatomic) NSString *punchLayoutName; // @dynamic punchLayoutName;
@property(copy, nonatomic) NSString *punchMasterId; // @dynamic punchMasterId;
@property(nonatomic) int replacedRangesCount; // @dynamic replacedRangesCount;
@property(nonatomic) _Bool showRevisionsDiff; // @dynamic showRevisionsDiff;
@property(copy, nonatomic) NSString *spellingLanguage; // @dynamic spellingLanguage;
@property(nonatomic) int suggestedMultipleChoiceOptionsAccepted; // @dynamic suggestedMultipleChoiceOptionsAccepted;
@property(nonatomic) _Bool suggestedTitle; // @dynamic suggestedTitle;
@property(nonatomic) int suggestedTitleLength; // @dynamic suggestedTitleLength;
@property(nonatomic) unsigned int tableNumCols; // @dynamic tableNumCols;
@property(nonatomic) unsigned int tableNumRows; // @dynamic tableNumRows;
@property(nonatomic) int userTitleLength; // @dynamic userTitleLength;
@property(nonatomic) int voiceCorrectionRank; // @dynamic voiceCorrectionRank;
@property(nonatomic) double zoomFactor; // @dynamic zoomFactor;

@end

