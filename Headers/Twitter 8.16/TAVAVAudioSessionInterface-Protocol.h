//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol TAVAVAudioSessionInterface
- (_Bool)setCategory:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
@property(nonatomic, readonly) _Bool secondaryAudioShouldBeSilencedHint;
@property(nonatomic, readonly) unsigned long long categoryOptions;
@property(nonatomic, readonly) NSString *mode;
@property(nonatomic, readonly) NSString *category;
@end

