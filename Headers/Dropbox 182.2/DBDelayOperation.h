//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBAsyncOperation.h>

@interface DBDelayOperation : DBAsyncOperation
{
    double _delay;
    CDUnknownBlockType _delayedBlock;
    _Bool _shouldCallComplete;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (void)db_runCompletion;
- (id)initWithDelay:(double)arg1;

@end
