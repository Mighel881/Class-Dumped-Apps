//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class DBTokenFieldTokenCell;

@protocol DBTokenFieldCellDelegate <NSObject>
- (void)tokenCellDidEndEditing:(DBTokenFieldTokenCell *)arg1;
- (void)tokenCellDidBeginEditing:(DBTokenFieldTokenCell *)arg1;
- (void)tokenCellDidRequestRemoval:(DBTokenFieldTokenCell *)arg1;
- (void)tokenCellDeletedPastBeginning:(DBTokenFieldTokenCell *)arg1;
- (void)tokenCellTextChanged:(DBTokenFieldTokenCell *)arg1;
- (_Bool)tokenCellShouldHandleReturn:(DBTokenFieldTokenCell *)arg1;
- (_Bool)tokenCellShouldAppendSpace:(DBTokenFieldTokenCell *)arg1;
@end

