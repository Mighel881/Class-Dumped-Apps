//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (FormData)
- (void)appendCloserWithBoundary:(id)arg1;
- (void)appendFormData:(id)arg1 name:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 boundary:(id)arg5;
- (void)appendFormData:(id)arg1 name:(id)arg2 contentType:(id)arg3 boundary:(id)arg4;
- (void)appendFormData:(id)arg1 name:(id)arg2 boundary:(id)arg3;
- (void)appendContentType:(id)arg1;
- (void)appendBoundary:(id)arg1;
- (void)appendText:(id)arg1;
@end
