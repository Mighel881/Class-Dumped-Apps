//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilConcurrentExecutor, JavaUtilMap;

@interface DocosDiscussionReplyHandleTracker : NSObject
{
    id <JavaUtilConcurrentExecutor> discussionCallbackExecutor_;
    id <JavaUtilMap> replyHandleSuggestionIdMap_;
    id <JavaUtilMap> replyHandlePostIdMap_;
    int nextReplyHandle_;
}

- (void)dealloc;
- (void)removeReplyHandleAfterFutureWithInt:(int)arg1 withDocosDiscussionFuture:(id)arg2;
- (int)addReplyHandleAfterFutureWithNSString:(id)arg1 withDocosDiscussionFuture:(id)arg2;
- (id)getPostIdFromReplyHandleWithInt:(int)arg1;
- (id)getSuggestionIdForHandleWithInt:(int)arg1;
- (id)initWithJavaUtilConcurrentExecutor:(id)arg1;

@end

