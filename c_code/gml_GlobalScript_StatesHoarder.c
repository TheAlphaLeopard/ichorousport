// gml_GlobalScript_StatesHoarder @ 0x14053cd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_StatesHoarder
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined4 uVar14;
  undefined8 uVar12;
  undefined8 **ppuVar13;
  ulonglong in_stack_fffffffffffffc90;
  undefined1 **ppuVar15;
  ulonglong uVar16;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  longlong *local_338;
  undefined4 local_32c;
  undefined1 *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  char *local_310;
  undefined4 local_308;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  byte local_2cc;
  undefined1 local_2c8 [12];
  byte local_2bc;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [12];
  byte local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined1 local_d8 [16];
  longlong local_c8;
  
  local_res20 = 0;
  local_310 = "gml_Script_StatesGrubSlam";
  local_318 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_318;
  local_308 = 0x3f0;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_2d8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_23c = 0xffffff;
  local_248 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_2dc = 0xffffff;
  local_2e8 = (longlong *)0x0;
  uStack_1dc = 0xffffff;
  local_1e8 = (longlong *)0x0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_34c = 0;
  local_358 = 0;
  local_24c = 0;
  local_258 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_308 = 0x3f2;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_14c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_150 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *param_5;
  }
  else {
    FUN_1400419b0(&local_158);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf890) &&
     (_Init_thread_header(&DAT_141ddf890), DAT_141ddf890 == -1)) {
    _DAT_141ddf8fc = 0;
    _DAT_141ddf8f0 = 0x4000000000000000;
    _DAT_141ddf910 = 0;
    _DAT_141ddf904 = 0;
    _DAT_141ddf914 = 1;
    _DAT_141ddf924 = 0;
    _DAT_141ddf918 = 0x3ff0000000000000;
    _DAT_141ddf928 = 2;
    _DAT_141ddf938 = 0;
    _DAT_141ddf92c = 0x4008000000000000;
    _DAT_141ddf93c = 3;
    atexit((_func_5014 *)&LAB_141481cc0);
    _Init_thread_footer(&DAT_141ddf890);
  }
  uVar8 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddf8f0 + (longlong)(int)uVar8 * 0x14,&local_158,DAT_141955260,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141ddf900 + (longlong)(int)uVar8 * 0x14);
      if (iVar2 == 0) {
        local_308 = 0x3f6;
        uStack_33c = 0xf;
        local_348 = (longlong *)0x100000100000314;
        local_2f8 = 0x314;
        uStack_2f4 = 0x1000001;
        uStack_2f0 = uStack_340;
        uStack_2ec = 0xf;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uVar14 = (undefined4)((ulonglong)pcVar9 >> 0x20);
        FUN_140041b80(&local_248,&local_2f8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_248);
        local_308 = 0x3f7;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_22c = 0;
        local_238 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_238);
        local_308 = 0x3f8;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
        if (puVar5 != &local_1a8) {
          local_2f8 = *(undefined4 *)puVar5;
          uStack_2f4 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_2f0 = *(undefined4 *)(puVar5 + 1);
          uStack_2ec = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_2f8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_1a8);
        local_308 = 0x3f9;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3ff0000000000000;
        local_308 = 0x3fa;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_358 = 0;
        local_350 = 0;
        local_34c = 5;
        local_2f8 = _DAT_141dc66d0;
        uStack_2f4 = uRam0000000141dc66d4;
        uStack_2f0 = uRam0000000141dc66d8;
        uStack_2ec = uRam0000000141dc66dc;
        if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        FUN_140041b80(&local_2d8,&local_2f8);
        local_228 = &local_2d8;
        puVar5 = (undefined8 *)
                 FUN_140e634e0(local_res8,local_res10,&local_358,1,CONCAT44(uVar14,DAT_141a0a0d8),
                               &local_228);
        uStack_35c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_360 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) == 0) {
          local_368 = (longlong *)*puVar5;
        }
        else {
          FUN_1400419b0(&local_368,puVar5);
        }
        local_res20 = 1;
        uStack_31c = 7;
        local_328 = (undefined1 *)CONCAT44(local_328._4_4_,3);
        FUN_140042560(&local_368,&local_328);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_2f8 = (undefined4)local_368;
        uStack_2f4 = local_368._4_4_;
        uStack_2f0 = uStack_360;
        uStack_2ec = uStack_35c;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_2f8);
        if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        uStack_31c = 0xf;
        local_328 = (undefined1 *)0x1000000000000b5;
        FUN_140e86c30(&local_328,DAT_141a0a7e8,0,&local_168);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_308 = 0x3fc;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_308 = 0x3fd;
      }
      else if (iVar2 == 1) {
        local_308 = 0x401;
        uStack_35c = 6;
        local_368 = local_res8;
        in_stack_fffffffffffffc90 = in_stack_fffffffffffffc90 & 0xffffffffffffff00;
        ppuVar10 = (undefined8 **)((ulonglong)pcVar9 & 0xffffffffffffff00);
        FUN_140e87440(&local_368,DAT_141a0a728,0x80000000,&local_178,ppuVar10,
                      in_stack_fffffffffffffc90);
        if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        uStack_35c = 0xf;
        local_368 = (longlong *)0x100000100000314;
        iVar2 = FUN_140e851f0(&local_178,&local_368,DAT_141955260,0);
        if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        if (iVar2 == 0) {
          local_308 = 0x403;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_340 = DAT_1419df7b8;
          uStack_33c = DAT_1419df7bc;
          if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          FUN_140041b80(&local_2d8,&local_348);
          local_228 = &local_2d8;
          local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_340 = DAT_1419df7b8;
          uStack_33c = DAT_1419df7bc;
          if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2c8);
          }
          FUN_140041b80(local_2c8,&local_348);
          local_220 = local_2c8;
          ppuVar10 = &local_228;
          uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_358,2,ppuVar10);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            local_308 = 0x404;
            uStack_31c = 0xf;
            local_328 = (undefined1 *)0x100000100000311;
            local_348 = (longlong *)0x100000100000311;
            uStack_340 = uStack_320;
            uStack_33c = 0xf;
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            FUN_140041b80(&local_248,&local_348);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_248);
          }
          local_308 = 0x406;
          uStack_35c = 6;
          local_368 = local_res8;
          in_stack_fffffffffffffc90 = in_stack_fffffffffffffc90 & 0xffffffffffffff00;
          FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_148,
                        (ulonglong)ppuVar10 & 0xffffffffffffff00,in_stack_fffffffffffffc90);
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          uStack_35c = 0;
          local_368 = (longlong *)0x3fe0000000000000;
          FUN_1400462a0(&local_148,&local_368);
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_148);
          local_308 = 0x408;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
          if (puVar5 != &local_2d8) {
            local_348 = (longlong *)*puVar5;
            uStack_340 = *(undefined4 *)(puVar5 + 1);
            uStack_33c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            FUN_140041b80(&local_2d8,&local_348);
          }
          local_228 = &local_2d8;
          local_348 = (longlong *)CONCAT44(uRam00000001419e6184,_DAT_1419e6180);
          uStack_340 = uRam00000001419e6188;
          uStack_33c = uRam00000001419e618c;
          if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2c8);
          }
          FUN_140041b80(local_2c8,&local_348);
          local_220 = local_2c8;
          local_348 = (longlong *)CONCAT44(uRam00000001419e6164,_DAT_1419e6160);
          uStack_340 = uRam00000001419e6168;
          uStack_33c = uRam00000001419e616c;
          if ((1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2b8);
          }
          FUN_140041b80(local_2b8,&local_348);
          local_218 = local_2b8;
          FUN_140e609c0(local_res8);
          ppuVar10 = &local_228;
          puVar5 = (undefined8 *)
                   gml_Script_AngleRotateTowardsLerp(local_res8,local_res10,&local_358,3,ppuVar10);
          if (puVar5 != puVar6) {
            local_348 = (longlong *)*puVar5;
            uStack_340 = *(undefined4 *)(puVar5 + 1);
            uStack_33c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_348);
          }
          FUN_140e60910(1);
          local_308 = 0x409;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
        }
        local_308 = 0x40c;
        uStack_35c = 6;
        local_368 = local_res8;
        in_stack_fffffffffffffc90 = in_stack_fffffffffffffc90 & 0xffffffffffffff00;
        uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_368,DAT_141a0a728,0x80000000,&local_178,uVar11,
                      in_stack_fffffffffffffc90);
        if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        uStack_35c = 0xf;
        local_368 = (longlong *)0x100000100000311;
        iVar2 = FUN_140e851f0(&local_178,&local_368,DAT_141955260,0);
        if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        if (iVar2 == 0) {
          local_308 = 0x40e;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x4020000000000000;
          local_308 = 0x40f;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x4070e00000000000;
          local_308 = 0x411;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          uStack_35c = 6;
          local_368 = local_res8;
          in_stack_fffffffffffffc90 = in_stack_fffffffffffffc90 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_2e8,uVar11,
                        in_stack_fffffffffffffc90);
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          uStack_35c = 6;
          local_368 = local_res8;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_1e8,uVar11,
                        in_stack_fffffffffffffc90 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar11 >> 0x20);
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          local_348 = local_2e8;
          uStack_340 = uStack_2e0;
          uStack_33c = uStack_2dc;
          if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          FUN_140041b80(&local_2d8,&local_348);
          local_228 = &local_2d8;
          uStack_35c = uStack_1dc;
          uStack_360 = uStack_1e0;
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
            local_368 = local_1e8;
          }
          else {
            FUN_1400419b0(&local_368,&local_1e8);
          }
          local_res20 = 2;
          local_32c = 7;
          local_338 = (longlong *)CONCAT44(local_338._4_4_,1);
          FUN_1400460e0(&local_368,&local_338);
          if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          local_348 = local_368;
          uStack_340 = uStack_360;
          uStack_33c = uStack_35c;
          if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2c8);
          }
          FUN_140041b80(local_2c8,&local_348);
          local_res20 = 0;
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          local_220 = local_2c8;
          uStack_31c = 0xf;
          local_328 = (undefined1 *)0x100000000000149;
          local_348 = (longlong *)0x100000000000149;
          uStack_340 = uStack_320;
          uStack_33c = 0xf;
          if ((1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2b8);
          }
          FUN_140041b80(local_2b8,&local_348);
          local_218 = local_2b8;
          uVar12 = CONCAT44(uVar14,DAT_141a12628);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_358,3,uVar12,&local_228);
          uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            local_348 = (longlong *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
            uStack_340 = uRam0000000141dc66d8;
            uStack_33c = uRam0000000141dc66dc;
            if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2a8);
            }
            FUN_140041b80(local_2a8,&local_348);
            local_210 = local_2a8;
            ppuVar15 = &local_210;
            uVar11 = CONCAT44(uVar14,DAT_141a0a0d8);
            puVar5 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_258,1,uVar11,ppuVar15);
            uStack_35c = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_360 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) == 0) {
              local_368 = (longlong *)*puVar5;
            }
            else {
              FUN_1400419b0(&local_368,puVar5);
            }
            local_res20 = 4;
            local_32c = 0;
            local_338 = (longlong *)0x3fd0000000000000;
            FUN_140042560(&local_368,&local_338);
            if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            uVar8 = FUN_140e851f0(uVar4,&local_368,DAT_141955260,1);
            local_res20 = 0;
            if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            if (uVar8 < 0x80000000) {
              local_308 = 0x413;
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              local_1d8 = 0;
              local_1d0 = 0;
              local_1cc = 5;
              local_32c = 6;
              local_338 = local_res8;
              uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
              uVar11 = uVar11 & 0xffffffffffffff00;
              FUN_140e87440(&local_338,DAT_1419fe0e8,0x80000000,&local_2e8,uVar11,uVar16);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_32c = 6;
              local_338 = local_res8;
              uVar11 = uVar11 & 0xffffffffffffff00;
              FUN_140e87440(&local_338,DAT_141a101f8,0x80000000,&local_188,uVar11,
                            uVar16 & 0xffffffffffffff00);
              uVar14 = (undefined4)(uVar11 >> 0x20);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              uStack_35c = uStack_2dc;
              uStack_360 = uStack_2e0;
              if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
                local_368 = local_2e8;
              }
              else {
                FUN_1400419b0(&local_368,&local_2e8);
              }
              local_res20 = 8;
              local_32c = 7;
              local_338 = (longlong *)CONCAT44(local_338._4_4_,0x10);
              FUN_1400460e0(&local_368,&local_338);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_348 = local_368;
              uStack_340 = uStack_360;
              uStack_33c = uStack_35c;
              if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_298);
              }
              FUN_140041b80(local_298,&local_348);
              local_res20 = 0;
              if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_368);
              }
              local_348 = (longlong *)local_188;
              uStack_340 = uStack_180;
              uStack_33c = uStack_17c;
              local_208 = local_298;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_348);
              local_200 = &local_288;
              local_348 = (longlong *)CONCAT44(uRam0000000141dd3eec,_DAT_141dd3ee8);
              uStack_340 = uRam0000000141dd3ef0;
              uStack_33c = DAT_141dd3ef4;
              if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_278);
              }
              FUN_140041b80(local_278,&local_348);
              local_1f8 = local_278;
              uStack_31c = 0xf;
              local_328 = (undefined1 *)0x100000000000111;
              local_348 = (longlong *)0x100000000000111;
              uStack_340 = uStack_320;
              uStack_33c = 0xf;
              if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_268);
              }
              FUN_140041b80(local_268,&local_348);
              local_1f0 = local_268;
              ppuVar15 = &local_208;
              uVar11 = CONCAT44(uVar14,DAT_141a0a7c8);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1d8,4,uVar11,ppuVar15);
              iVar2 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar4);
              if (0 < iVar2) {
                do {
                  local_308 = 0x415;
                  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0)
                  ;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                  *puVar5 = 0x3ff0000000000000;
                  cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
                } while (cVar1 != '\0');
              }
              FUN_140e63970(local_d8,&local_res8,&local_res10);
              local_308 = 0x419;
              if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              local_358 = 0;
              local_350 = 0;
              local_34c = 5;
              local_32c = 6;
              local_338 = local_res8;
              uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
              uVar11 = uVar11 & 0xffffffffffffff00;
              FUN_140e87440(&local_338,DAT_1419fe0e8,0x80000000,&local_2e8,uVar11,uVar16);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_32c = 6;
              local_338 = local_res8;
              uVar11 = uVar11 & 0xffffffffffffff00;
              FUN_140e87440(&local_338,DAT_141a101f8,0x80000000,&local_188,uVar11,
                            uVar16 & 0xffffffffffffff00);
              uVar14 = (undefined4)(uVar11 >> 0x20);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              uStack_35c = uStack_2dc;
              uStack_360 = uStack_2e0;
              if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
                local_368 = local_2e8;
              }
              else {
                FUN_1400419b0(&local_368,&local_2e8);
              }
              local_res20 = 0x10;
              local_32c = 7;
              local_338 = (longlong *)CONCAT44(local_338._4_4_,0x10);
              FUN_1400462a0(&local_368,&local_338);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_348 = local_368;
              uStack_340 = uStack_360;
              uStack_33c = uStack_35c;
              if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              FUN_140041b80(&local_2d8,&local_348);
              if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_368);
              }
              local_228 = &local_2d8;
              local_348 = (longlong *)local_188;
              uStack_340 = uStack_180;
              uStack_33c = uStack_17c;
              if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2c8);
              }
              FUN_140041b80(local_2c8,&local_348);
              local_220 = local_2c8;
              local_348 = (longlong *)CONCAT44(uRam0000000141dd3eec,_DAT_141dd3ee8);
              uStack_340 = uRam0000000141dd3ef0;
              uStack_33c = DAT_141dd3ef4;
              if ((1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2b8);
              }
              FUN_140041b80(local_2b8,&local_348);
              local_218 = local_2b8;
              uStack_31c = 0xf;
              local_328 = (undefined1 *)0x100000000000111;
              local_348 = (longlong *)0x100000000000111;
              uStack_340 = uStack_320;
              uStack_33c = 0xf;
              if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2a8);
              }
              FUN_140041b80(local_2a8,&local_348);
              local_210 = local_2a8;
              ppuVar10 = &local_228;
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_358,4,
                                    CONCAT44(uVar14,DAT_141a0a7c8),ppuVar10);
              iVar2 = FUN_140e63cb0(local_118,&local_res8,&local_res10,uVar4);
              if (0 < iVar2) {
                do {
                  local_308 = 0x41b;
                  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0)
                  ;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                  *puVar5 = &DAT_bff0000000000000;
                  cVar1 = FUN_140e643f0(local_118,&local_res8,&local_res10);
                } while (cVar1 != '\0');
              }
              FUN_140e63970(local_118,&local_res8,&local_res10);
              local_308 = 0x41f;
              if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              local_358 = 0;
              local_350 = 0;
              local_34c = 5;
              local_348 = (longlong *)CONCAT44(uRam00000001419e61a4,_DAT_1419e61a0);
              uStack_340 = uRam00000001419e61a8;
              uStack_33c = uRam00000001419e61ac;
              if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              FUN_140041b80(&local_2d8,&local_348);
              local_228 = &local_2d8;
              local_348 = (longlong *)CONCAT44(uRam00000001419e61e4,_DAT_1419e61e0);
              uStack_340 = uRam00000001419e61e8;
              uStack_33c = uRam00000001419e61ec;
              if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2c8);
              }
              FUN_140041b80(local_2c8,&local_348);
              local_220 = local_2c8;
              local_348 = (longlong *)CONCAT44(uRam00000001419e6184,_DAT_1419e6180);
              uStack_340 = uRam00000001419e6188;
              uStack_33c = uRam00000001419e618c;
              if ((1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2b8);
              }
              FUN_140041b80(local_2b8,&local_348);
              local_218 = local_2b8;
              local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_340 = DAT_1419df7b8;
              uStack_33c = DAT_1419df7bc;
              if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2a8);
              }
              FUN_140041b80(local_2a8,&local_348);
              local_210 = local_2a8;
              ppuVar13 = &local_228;
              FUN_14044e5b0(local_res8,local_res10,&local_358,4,ppuVar13);
              local_308 = 0x420;
              local_32c = 6;
              local_338 = local_res8;
              uVar11 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
              FUN_140e87440(&local_338,DAT_1419fe0e8,0x80000000,&local_2e8,uVar11,
                            (ulonglong)ppuVar10 & 0xffffffffffffff00);
              uVar14 = (undefined4)(uVar11 >> 0x20);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_348 = local_2e8;
              uStack_340 = uStack_2e0;
              uStack_33c = uStack_2dc;
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              FUN_140041b80(&local_198,&local_348);
              local_32c = 0xf;
              local_338 = (longlong *)0x1000000000000b5;
              FUN_140e86c30(&local_338,DAT_1419fe0e8,0x80000000,&local_198);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_308 = 0x421;
              if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_1ac = 0;
              local_1b8 = 0x4050000000000000;
              local_32c = 0xf;
              local_338 = (longlong *)0x1000000000000b5;
              FUN_140e86c30(&local_338,DAT_1419fe158,0x80000000,&local_1b8);
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_308 = 0x423;
              if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              local_358 = 0;
              local_350 = 0;
              local_34c = 5;
              uStack_31c = 0xf;
              local_328 = (undefined1 *)0x100000200000169;
              local_348 = (longlong *)0x100000200000169;
              uStack_340 = uStack_320;
              uStack_33c = 0xf;
              if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              FUN_140041b80(&local_2d8,&local_348);
              local_228 = &local_2d8;
              local_348 = (longlong *)CONCAT44(uRam00000001419e6264,_DAT_1419e6260);
              uStack_340 = uRam00000001419e6268;
              uStack_33c = uRam00000001419e626c;
              if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2c8);
              }
              FUN_140041b80(local_2c8,&local_348);
              local_220 = local_2c8;
              local_348 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
              uStack_340 = uRam00000001419df7a8;
              uStack_33c = uRam00000001419df7ac;
              if ((1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2b8);
              }
              FUN_140041b80(local_2b8,&local_348);
              local_218 = local_2b8;
              local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_340 = DAT_1419df7b8;
              uStack_33c = DAT_1419df7bc;
              if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2a8);
              }
              FUN_140041b80(local_2a8,&local_348);
              local_210 = local_2a8;
              local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_340 = DAT_1419df7b8;
              uStack_33c = DAT_1419df7bc;
              if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_298);
              }
              FUN_140041b80(local_298,&local_348);
              local_208 = local_298;
              local_288 = FUN_140e794b0(0,0);
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              local_27c = 0;
              local_200 = &local_288;
              ppuVar10 = &local_228;
              uVar11 = CONCAT44(uVar14,DAT_141a0a2e8);
              FUN_140e634e0(local_res8,local_res10,&local_358,6,uVar11,ppuVar10);
              local_308 = 0x425;
              if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              local_1bc = 0;
              local_1c8 = 0;
              iVar2 = 4;
              do {
                iVar2 = iVar2 + -1;
                local_308 = 0x428;
                if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_358);
                }
                local_358 = 0;
                local_350 = 0;
                local_34c = 5;
                local_32c = 6;
                local_338 = local_res8;
                uVar16 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
                uVar11 = uVar11 & 0xffffffffffffff00;
                FUN_140e87440(&local_338,DAT_1419fe0e8,0x80000000,&local_2e8,uVar11,uVar16);
                if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_338);
                }
                local_12c = 6;
                local_138 = local_res8;
                uVar11 = uVar11 & 0xffffffffffffff00;
                FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_1e8,uVar11,
                              uVar16 & 0xffffffffffffff00);
                uVar14 = (undefined4)(uVar11 >> 0x20);
                if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_138);
                }
                local_2f8 = (undefined4)local_2e8;
                uStack_2f4 = local_2e8._4_4_;
                uStack_2f0 = uStack_2e0;
                uStack_2ec = uStack_2dc;
                if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140041b80(&local_2d8,&local_2f8);
                local_228 = &local_2d8;
                local_2f8 = (undefined4)local_1e8;
                uStack_2f4 = local_1e8._4_4_;
                uStack_2f0 = uStack_1e0;
                uStack_2ec = uStack_1dc;
                if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_2c8);
                }
                FUN_140041b80(local_2c8,&local_2f8);
                local_220 = local_2c8;
                local_2f8 = _DAT_141dd3ee8;
                uStack_2f4 = uRam0000000141dd3eec;
                uStack_2f0 = uRam0000000141dd3ef0;
                uStack_2ec = DAT_141dd3ef4;
                if ((1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_2b8);
                }
                FUN_140041b80(local_2b8,&local_2f8);
                local_218 = local_2b8;
                uStack_11c = 0xf;
                local_128 = 0x10000000000004f;
                local_2f8 = 0x4f;
                uStack_2f4 = 0x1000000;
                uStack_2f0 = uStack_120;
                uStack_2ec = 0xf;
                if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_2a8);
                }
                FUN_140041b80(local_2a8,&local_2f8);
                local_210 = local_2a8;
                ppuVar10 = &local_228;
                uVar11 = CONCAT44(uVar14,DAT_141a0a7c8);
                uVar4 = FUN_140e634e0(local_res8,local_res10,&local_358,4,uVar11,ppuVar10);
                iVar3 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar4);
                if (0 < iVar3) {
                  do {
                    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
                    local_308 = 0x42a;
                    uStack_33c = 0xf;
                    local_348 = (longlong *)0x100000100000318;
                    local_2f8 = 0x318;
                    uStack_2f4 = 0x1000001;
                    uStack_2f0 = uStack_340;
                    uStack_2ec = 0xf;
                    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_248);
                    }
                    FUN_140041b80(&local_248,&local_2f8);
                    FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_248);
                    local_308 = 0x42b;
                    uVar4 = FUN_140e79480(0);
                    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_238);
                    }
                    local_22c = 0;
                    local_238 = uVar4;
                    FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_238);
                    local_308 = 0x42c;
                    puVar5 = (undefined8 *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdad8);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                    *puVar5 = 0x3f847ae147ae147b;
                    local_308 = 0x42e;
                    puVar5 = (undefined8 *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                    FUN_140e609c0(local_res8);
                    local_368 = (longlong *)FUN_140e794b0(0,0);
                    uStack_35c = 0;
                    local_res20 = 0x200;
                    FUN_140042560(&local_368,&local_1c8);
                    if (&local_368 != puVar5) {
                      local_2f8 = (undefined4)local_368;
                      uStack_2f4 = local_368._4_4_;
                      uStack_2f0 = uStack_360;
                      uStack_2ec = uStack_35c;
                      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0
                         ) {
                        FUN_140041a50(puVar5);
                      }
                      FUN_140041b80(puVar5,&local_2f8);
                    }
                    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_368);
                    }
                    FUN_140e60910(1);
                    local_308 = 0x42f;
                    puVar7 = (ulonglong *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                    uVar16 = FUN_140e794b0(0,0);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar7);
                    }
                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                    *puVar7 = uVar16 ^ 0x8000000000000000;
                    cVar1 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
                  } while (cVar1 != '\0');
                }
                FUN_140e63970(local_f8,&local_res8,&local_res10);
                local_308 = 0x432;
                uStack_31c = 0;
                local_328 = &DAT_bff0000000000000;
                FUN_140042560(&local_1c8,&local_328);
                if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_328);
                }
                if (local_e8 != 0) {
                  FUN_140e4cd60();
                }
                param_3 = local_res18;
              } while (0 < iVar2);
              local_308 = 0x436;
              if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              local_358 = 0;
              local_350 = 0;
              local_34c = 5;
              local_2f8 = _DAT_1419e61d0;
              uStack_2f4 = uRam00000001419e61d4;
              uStack_2f0 = uRam00000001419e61d8;
              uStack_2ec = uRam00000001419e61dc;
              if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              FUN_140041b80(&local_2d8,&local_2f8);
              local_228 = &local_2d8;
              local_2f8 = (undefined4)DAT_1419df7b0;
              uStack_2f4 = DAT_1419df7b0._4_4_;
              uStack_2f0 = DAT_1419df7b8;
              uStack_2ec = DAT_1419df7bc;
              if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2c8);
              }
              FUN_140041b80(local_2c8,&local_2f8);
              local_220 = local_2c8;
              gml_Script_truestate_begin_step(local_res8,local_res10,&local_358,2,&local_228);
              local_308 = 0x437;
              puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0;
              if (local_108 != 0) {
                FUN_140e4cd60();
                local_108 = 0;
              }
              if (local_c8 != 0) {
                FUN_140e4cd60();
              }
            }
          }
          local_308 = 0x43a;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
          FUN_140e63610(local_res8,local_res10,&local_358,0,uVar4,0);
        }
        local_308 = 0x43d;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_358 = 0;
        local_350 = 0;
        local_34c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
        uVar4 = FUN_140e63610(local_res8,local_res10,&local_358,0,uVar4,0);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
          uStack_31c = 0;
          local_328 = (undefined1 *)0x0;
          iVar2 = FUN_140e851f0(uVar4,&local_328,DAT_141955260,1);
          if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          if (iVar2 != -2 && iVar2 < 1) {
            local_308 = 0x43f;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            local_2f8 = _DAT_1419e6190;
            uStack_2f4 = uRam00000001419e6194;
            uStack_2f0 = uRam00000001419e6198;
            uStack_2ec = uRam00000001419e619c;
            if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            FUN_140041b80(&local_2d8,&local_2f8);
            local_228 = &local_2d8;
            local_2f8 = (undefined4)DAT_1419df7b0;
            uStack_2f4 = DAT_1419df7b0._4_4_;
            uStack_2f0 = DAT_1419df7b8;
            uStack_2ec = DAT_1419df7bc;
            if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2c8);
            }
            FUN_140041b80(local_2c8,&local_2f8);
            local_220 = local_2c8;
            gml_Script_truestate_begin_step(local_res8,local_res10,&local_258,2,&local_228);
          }
        }
        local_308 = 0x443;
      }
      else if (iVar2 == 2) {
        local_308 = 0x447;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_358 = 0;
        local_350 = 0;
        local_34c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_358,0,uVar4,0);
        local_308 = 0x448;
      }
      else if (iVar2 == 3) {
        local_308 = 0x44c;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  _eh_vector_destructor_iterator_(&local_2d8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_318;
  return param_3;
}

