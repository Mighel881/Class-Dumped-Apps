//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPIButtonContent, ASTAPIContactSelectionContent, ASTAPIDateSelectionContent, ASTAPIEditableTextContent, ASTAPIListContent, ASTAPIRecurrenceSelectionContent, ASTAPITimeSelectionContent, NSString;

@interface ASTAPIFormFieldContent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASTAPIButtonContent *buttonContent; // @dynamic buttonContent;
@property(retain, nonatomic) ASTAPIContactSelectionContent *contactSelectionContent; // @dynamic contactSelectionContent;
@property(retain, nonatomic) ASTAPIDateSelectionContent *dateSelectionContent; // @dynamic dateSelectionContent;
@property(copy, nonatomic) NSString *disId; // @dynamic disId;
@property(retain, nonatomic) ASTAPIEditableTextContent *editableTextContent; // @dynamic editableTextContent;
@property(readonly, nonatomic) int fieldContentOneOfCase; // @dynamic fieldContentOneOfCase;
@property(nonatomic) _Bool hasDisId; // @dynamic hasDisId;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasUpdated; // @dynamic hasUpdated;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) ASTAPIListContent *listContent; // @dynamic listContent;
@property(retain, nonatomic) ASTAPIRecurrenceSelectionContent *recurrenceSelectionContent; // @dynamic recurrenceSelectionContent;
@property(retain, nonatomic) ASTAPITimeSelectionContent *timeSelectionContent; // @dynamic timeSelectionContent;
@property(nonatomic) _Bool updated; // @dynamic updated;

@end

