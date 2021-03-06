//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPIAssistantResponse_Metadata, ASTAPIConversationDelta, ASTAPIConversationParams, ASTAPIShowSearchResultsPageArgs, MAJPeanut, MSPRenderedCard, NSMutableArray, NSString, RichText;

@interface ASTAPIAssistantResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MAJPeanut *actionPeanut; // @dynamic actionPeanut;
@property(retain, nonatomic) ASTAPIConversationDelta *conversationDelta; // @dynamic conversationDelta;
@property(retain, nonatomic) ASTAPIConversationParams *conversationParams; // @dynamic conversationParams;
@property(copy, nonatomic) NSString *eventId; // @dynamic eventId;
@property(nonatomic) _Bool hasActionPeanut; // @dynamic hasActionPeanut;
@property(nonatomic) _Bool hasConversationDelta; // @dynamic hasConversationDelta;
@property(nonatomic) _Bool hasConversationParams; // @dynamic hasConversationParams;
@property(nonatomic) _Bool hasEventId; // @dynamic hasEventId;
@property(nonatomic) _Bool hasHasTextToSpeech; // @dynamic hasHasTextToSpeech;
@property(nonatomic) _Bool hasInvalidRequest; // @dynamic hasInvalidRequest;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasNaturalLanguageResponse; // @dynamic hasNaturalLanguageResponse;
@property(nonatomic) _Bool hasPendingAdditionalOutput; // @dynamic hasPendingAdditionalOutput;
@property(nonatomic) _Bool hasRenderedCard; // @dynamic hasRenderedCard;
@property(nonatomic) _Bool hasRewrittenQuery; // @dynamic hasRewrittenQuery;
@property(nonatomic) _Bool hasRichText; // @dynamic hasRichText;
@property(nonatomic) _Bool hasSrpArgs; // @dynamic hasSrpArgs;
@property(nonatomic) _Bool hasSuffix; // @dynamic hasSuffix;
@property(nonatomic) _Bool hasTextToSpeech; // @dynamic hasTextToSpeech;
@property(nonatomic) _Bool hasZwiebackNid; // @dynamic hasZwiebackNid;
@property(nonatomic) _Bool invalidRequest; // @dynamic invalidRequest;
@property(retain, nonatomic) ASTAPIAssistantResponse_Metadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *naturalLanguageResponse; // @dynamic naturalLanguageResponse;
@property(retain, nonatomic) NSMutableArray *opaSuggestionsArray; // @dynamic opaSuggestionsArray;
@property(readonly, nonatomic) unsigned long long opaSuggestionsArray_Count; // @dynamic opaSuggestionsArray_Count;
@property(nonatomic) _Bool pendingAdditionalOutput; // @dynamic pendingAdditionalOutput;
@property(retain, nonatomic) MSPRenderedCard *renderedCard; // @dynamic renderedCard;
@property(retain, nonatomic) NSMutableArray *renderingResultArray; // @dynamic renderingResultArray;
@property(readonly, nonatomic) unsigned long long renderingResultArray_Count; // @dynamic renderingResultArray_Count;
@property(copy, nonatomic) NSString *rewrittenQuery; // @dynamic rewrittenQuery;
@property(retain, nonatomic) RichText *richText; // @dynamic richText;
@property(retain, nonatomic) ASTAPIShowSearchResultsPageArgs *srpArgs; // @dynamic srpArgs;
@property(copy, nonatomic) NSString *suffix; // @dynamic suffix;
@property(retain, nonatomic) NSMutableArray *suggestionsArray; // @dynamic suggestionsArray;
@property(readonly, nonatomic) unsigned long long suggestionsArray_Count; // @dynamic suggestionsArray_Count;
@property(copy, nonatomic) NSString *zwiebackNid; // @dynamic zwiebackNid;

@end

