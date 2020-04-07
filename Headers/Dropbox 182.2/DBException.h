//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSException.h>

@class DBError;

@interface DBException : NSException
{
    struct optional<dropbox::oxygen::Backtrace> _cppBacktrace;
    DBError *_error;
}

+ (id)exceptionWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)exceptionWithError:(id)arg1;
+ (id)exceptionWithError:(id)arg1 cppBacktrace:(const struct Backtrace *)arg2;
@property(readonly, nonatomic) DBError *error; // @synthesize error=_error;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)callStackSymbols;
- (id)callStackReturnAddresses;
- (id)initWithError:(id)arg1 cppBacktrace:(const struct Backtrace *)arg2;
- (id)initWithError:(id)arg1;

@end
