//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRTagManagerQuery.h"

@class NSArray, NSString;

@interface GTLRTagManagerQuery_AccountsContainersMoveFoldersUpdate : GTLRTagManagerQuery
{
}

+ (id)queryWithObject:(id)arg1 accountId:(id)arg2 containerId:(id)arg3 folderId:(id)arg4;
+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *accountId; // @dynamic accountId;
@property(copy, nonatomic) NSString *containerId; // @dynamic containerId;
@property(copy, nonatomic) NSString *folderId; // @dynamic folderId;
@property(retain, nonatomic) NSArray *tagId; // @dynamic tagId;
@property(retain, nonatomic) NSArray *triggerId; // @dynamic triggerId;
@property(retain, nonatomic) NSArray *variableId; // @dynamic variableId;

@end
