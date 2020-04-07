//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBDatabaseQueryHelper.h"

@interface DBSpotlightDatabaseQueryHelper : DBDatabaseQueryHelper
{
}

+ (unsigned long long)db_countFromResultSet:(id)arg1;
+ (id)db_userIdFromResultSet:(id)arg1;
+ (id)db_queryParamsForItem:(id)arg1;
+ (id)db_itemFromResultSet:(id)arg1;
+ (id)schemaStrings;
+ (id)queueForOpeningDatabaseAtPath:(id)arg1;
- (_Bool)deleteAllItemsWithRemovedItems:(id *)arg1;
- (_Bool)deleteItemsMatching:(_Bool)arg1 userIds:(id)arg2 removedItems:(id *)arg3;
- (_Bool)deleteItems:(id)arg1 removedItems:(id *)arg2;
- (_Bool)insertItems:(id)arg1;
- (unsigned long long)countAllItemsForUserIds:(id)arg1;
- (unsigned long long)countAllItemsForUserId:(id)arg1;
- (id)selectDistinctUserIds;
- (id)db_selectItemsMatching:(_Bool)arg1 userIds:(id)arg2;
- (id)selectItemsWithUids:(id)arg1;
- (id)selectAllItemsForUserIds:(id)arg1;
- (id)db_selectAllItemsWithField:(id)arg1 matching:(id)arg2;
- (id)selectAllItems;

@end
