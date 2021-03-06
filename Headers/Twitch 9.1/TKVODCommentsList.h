//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitchKit/NSCopying-Protocol.h>

@class NSMutableOrderedSet;

@interface TKVODCommentsList : NSObject <NSCopying>
{
    NSMutableOrderedSet *_comments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *comments; // @synthesize comments=_comments;
- (id)visualDebuggingDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)resizeCommentListToMaximumCommentCount:(unsigned long long)arg1;
- (void)removeAllComments;
- (unsigned long long)indexOfCommentWithID:(id)arg1;
- (unsigned long long)indexOfComment:(id)arg1;
- (id)mostRecentCommentAtTimestamp:(double)arg1 searchTopLevelOnly:(_Bool)arg2 nearestIfNoExactMatches:(_Bool)arg3;
- (id)allComments;
- (id)commentAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (double)timestampOfLatestComment;
- (id)commentsAtTimestamp:(double)arg1 sortedByCreationDate:(_Bool)arg2 limit:(unsigned long long)arg3;
- (void)insertComment:(id)arg1 afterComment:(id)arg2;
- (void)removeComment:(id)arg1;
- (void)addComments:(id)arg1 skipAutoSorting:(_Bool)arg2;
- (void)addComments:(id)arg1;
- (id)init;

@end

