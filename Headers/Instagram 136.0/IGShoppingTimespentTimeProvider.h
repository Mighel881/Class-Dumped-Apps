//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGShoppingTimespentTimeProvider : NSObject
{
    CDUnknownBlockType _currentTimeProvider;
}

@property(copy, nonatomic) CDUnknownBlockType currentTimeProvider; // @synthesize currentTimeProvider=_currentTimeProvider;
- (void).cxx_destruct;
- (double)currentTime;
- (id)initWithUserSession:(CDUnknownBlockType)arg1;

@end

