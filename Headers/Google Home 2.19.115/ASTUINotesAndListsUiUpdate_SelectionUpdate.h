//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ListAndNoteProviderConfig;

@interface ASTUINotesAndListsUiUpdate_SelectionUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewSelectedProviderId; // @dynamic hasNewSelectedProviderId;
@property(nonatomic) _Bool hasSelectedProviderCapability; // @dynamic hasSelectedProviderCapability;
@property(nonatomic) _Bool hasUnselectedProviderId; // @dynamic hasUnselectedProviderId;
@property(nonatomic) long long newSelectedProviderId; // @dynamic newSelectedProviderId;
@property(retain, nonatomic) ListAndNoteProviderConfig *selectedProviderCapability; // @dynamic selectedProviderCapability;
@property(nonatomic) long long unselectedProviderId; // @dynamic unselectedProviderId;

@end

