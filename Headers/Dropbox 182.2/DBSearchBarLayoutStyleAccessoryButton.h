//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBSearchBarAccessoryButton.h"

@interface DBSearchBarLayoutStyleAccessoryButton : DBSearchBarAccessoryButton
{
}

+ (id)iconForState:(unsigned long long)arg1 fileViewAppearance:(id)arg2;
+ (id)localizedButtonStringForState:(unsigned long long)arg1;
+ (id)localizedStringForState:(unsigned long long)arg1;
+ (id)accessoryButtonWithAction:(CDUnknownBlockType)arg1 fileListConfig:(id)arg2 useTitle:(_Bool)arg3 goDirectlyToNextState:(_Bool)arg4 fileViewAppearance:(id)arg5;
+ (id)db_wrappedFileEntryStates;
+ (unsigned long long)buttonStateFromCollectionViewLayoutStyle:(unsigned long long)arg1;
+ (unsigned long long)collectionViewLayoutStyleFromButtonState:(unsigned long long)arg1;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;

// Remaining properties
@property(nonatomic) unsigned long long customControlState; // @dynamic customControlState;

@end
