// gml_Script_scribble_whitelist_sound @ 0x140492640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_whitelist_sound
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 **ppuVar14;
  ulonglong in_stack_fffffffffffffd70;
  undefined4 uVar15;
  uint uVar16;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined4 local_198 [3];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined4 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_170 = "gml_Script_scribble_typists_add_event";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 7;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_1e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = (undefined8 *)0x0;
  uStack_6c = 0xffffff;
  local_78 = (undefined8 *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (undefined8 *)0x0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_25c = 0;
  local_268 = 0;
  local_23c = 0;
  local_248 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_154 = 0;
  local_160 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf180) &&
     (_Init_thread_header(&DAT_141ddf180), DAT_141ddf180 == -1)) {
    DAT_141ddf178 = (longlong *)FUN_140e63aa0(DAT_1419f9688);
    _Init_thread_footer(&DAT_141ddf180);
  }
  if (DAT_141ddc19d == '\0') {
    FUN_140e64380(DAT_141ddf178,"gml_Script_scribble_typists_add_event");
    FUN_140e64380(param_1,"gml_Script_scribble_typists_add_event");
  }
  local_168 = 9;
  if (DAT_141ddc19d == '\0') {
    DAT_141ddc19d = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf178 + 0x10))(DAT_141ddf178,DAT_1419fcb48);
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = DAT_1419df7b8;
    uStack_26c = DAT_1419df7bc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_278);
    local_128 = &local_1c8;
    FUN_140e609c0(DAT_141ddf178);
    ppuVar7 = &local_128;
    puVar4 = (undefined8 *)
             gml_Script___scribble_texture_get_material(param_1,param_2,&local_268,1,ppuVar7);
    if (puVar4 != puVar3) {
      local_278 = (undefined8 *)*puVar4;
      uStack_270 = *(undefined4 *)(puVar4 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_278);
    }
    FUN_140e60910(1);
    uVar5 = (**(code **)(*DAT_141ddf178 + 8))(DAT_141ddf178,DAT_1419fcb48);
    ppuVar6 = (undefined8 **)(**(code **)(*DAT_141ddf178 + 0x10))(DAT_141ddf178,DAT_141a08a78);
    in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
    uVar12 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a08ac8,0x80000000,&local_68,uVar12,in_stack_fffffffffffffd70);
    FUN_140e609c0(DAT_141ddf178);
    if (&local_68 != ppuVar6) {
      local_278 = local_68;
      uStack_270 = uStack_60;
      uStack_26c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar6);
      }
      FUN_140041b80(ppuVar6,&local_278);
    }
    FUN_140e60910(1);
    ppuVar7 = (undefined8 **)(**(code **)(*DAT_141ddf178 + 0x10))(DAT_141ddf178,DAT_141a09168);
    uVar5 = (**(code **)(*DAT_141ddf178 + 8))(DAT_141ddf178,DAT_1419fcb48);
    in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a08fa8,0x80000000,&local_78,uVar12,in_stack_fffffffffffffd70);
    FUN_140e609c0(DAT_141ddf178);
    if (&local_78 != ppuVar7) {
      local_278 = local_78;
      uStack_270 = uStack_70;
      uStack_26c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar7);
      }
      FUN_140041b80(ppuVar7,&local_278);
    }
    FUN_140e60910(1);
    ppuVar7 = (undefined8 **)(**(code **)(*DAT_141ddf178 + 0x10))(DAT_141ddf178,DAT_141a07b18);
    uVar5 = (**(code **)(*DAT_141ddf178 + 8))(DAT_141ddf178,DAT_1419fcb48);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a077c8,0x80000000,&local_88,uVar12,
                  in_stack_fffffffffffffd70 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141ddf178);
    if (&local_88 != ppuVar7) {
      local_278 = local_88;
      uStack_270 = uStack_80;
      uStack_26c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar7);
      }
      FUN_140041b80(ppuVar7,&local_278);
    }
    FUN_140e60910(1);
  }
  local_168 = 0xe;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140492ae8:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_1e8) goto LAB_140492ae8;
  }
  local_138 = &local_1e8;
  uVar13 = CONCAT44(uVar15,DAT_1419fdbf8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
  uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_168 = 0x10;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_278 = (undefined8 *)CONCAT44(uRam0000000141dd36fc,_DAT_141dd36f8);
    uStack_270 = uRam0000000141dd3700;
    uStack_26c = DAT_141dd3704;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
    local_130 = &local_1d8;
    if ((param_4 < 1) || (puVar3 = (undefined8 *)*param_5, puVar3 != &local_1c8)) {
      local_278 = (undefined8 *)*puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_278);
    }
    local_128 = &local_1c8;
    local_278 = (undefined8 *)CONCAT44(uRam0000000141dd378c,_DAT_141dd3788);
    uStack_270 = uRam0000000141dd3790;
    uStack_26c = DAT_141dd3794;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_278);
    local_120 = &local_1b8;
    FUN_1401ef7f0(param_1,param_2,&local_248,3,&local_130);
    local_168 = 0x11;
    goto LAB_140494524;
  }
  local_168 = 0x14;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140492cc0:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 != &local_1e8) goto LAB_140492cc0;
  }
  local_138 = &local_1e8;
  uVar13 = CONCAT44(uVar15,DAT_1419fdc08);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
  uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
LAB_140494376:
    local_168 = 0x16;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    local_160 = 0;
    local_158 = 0;
    local_154 = 5;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    if ((param_4 < 2) || (puVar3 = (undefined8 *)param_5[1], puVar3 != &local_1b8)) {
      local_148 = *(undefined4 *)puVar3;
      uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_140 = *(undefined4 *)(puVar3 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_148);
    }
    local_148 = _DAT_141dd3718;
    uStack_144 = uRam0000000141dd371c;
    uStack_140 = uRam0000000141dd3720;
    uStack_13c = DAT_141dd3724;
    local_120 = &local_1b8;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_148);
    local_118 = &local_1a8;
    puVar9 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_d0,1,CONCAT44(uVar15,DAT_1419fdc58),&local_120);
    if (puVar9 != local_198) {
      local_148 = *puVar9;
      uStack_144 = puVar9[1];
      uStack_140 = puVar9[2];
      uStack_13c = puVar9[3];
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_148);
    }
    local_110 = local_198;
    local_148 = _DAT_141dd3788;
    uStack_144 = uRam0000000141dd378c;
    uStack_140 = uRam0000000141dd3790;
    uStack_13c = DAT_141dd3794;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_148);
    local_108 = local_188;
    FUN_1401ef7f0(param_1,param_2,&local_160,3,&local_118);
    local_168 = 0x17;
    goto LAB_140494524;
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140492d72:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 != &local_1d8) goto LAB_140492d72;
  }
  local_130 = &local_1d8;
  uVar13 = CONCAT44(uVar15,DAT_141a07928);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_248,1,uVar13,&local_130);
  uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
LAB_140492e1f:
      local_278 = (undefined8 *)*puVar4;
      uStack_270 = *(undefined4 *)(puVar4 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_278);
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
      if (puVar4 != &local_1c8) goto LAB_140492e1f;
    }
    local_128 = &local_1c8;
    uVar13 = CONCAT44(uVar15,DAT_141a05ea8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_208,1,uVar13,&local_128);
    uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') goto LAB_140494376;
  }
  local_168 = 0x1a;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar15 = 0;
  puVar4 = (undefined8 *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_248,0,0);
  if (puVar4 != &local_1e8) {
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  local_138 = &local_1e8;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140492f5a:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_1d8) goto LAB_140492f5a;
  }
  local_130 = &local_1d8;
  ppuVar7 = &local_138;
  uVar13 = CONCAT44(uVar15,DAT_1419fcba8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_268,2,uVar13,ppuVar7);
  uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_168 = 0x1c;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uStack_20c = DAT_141dd3774;
    uStack_210 = DAT_141dd3770;
    if ((1 << ((byte)DAT_141dd3774 & 0x1f) & 0x46U) == 0) {
      local_218 = DAT_141dd3768;
    }
    else {
      FUN_1400419b0(&local_218,&DAT_141dd3768);
    }
    local_24c = DAT_141dd3744;
    local_250 = DAT_141dd3740;
    if ((1 << ((byte)DAT_141dd3744 & 0x1f) & 0x46U) == 0) {
      local_258 = DAT_141dd3738;
    }
    else {
      FUN_1400419b0(&local_258,&DAT_141dd3738);
    }
    if (0 < param_4) {
      puVar3 = (undefined8 *)*param_5;
    }
    uVar11 = 1 << ((byte)local_24c & 0x1f) & 0x46;
    local_220 = local_250;
    local_21c = local_24c;
    if (uVar11 == 0) {
      local_228 = local_258;
    }
    else {
      FUN_1400419b0(&local_228,&local_258);
    }
    FUN_1400460e0(&local_228,puVar3);
    uStack_22c = local_21c;
    uStack_230 = local_220;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
      local_238 = local_228;
    }
    else {
      FUN_1400419b0(&local_238,&local_228);
    }
    FUN_1400460e0(&local_238,&local_218);
    local_278 = local_238;
    uStack_270 = uStack_230;
    uStack_26c = uStack_22c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_278);
    uVar15 = 4;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if (uVar11 != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_128 = &local_1c8;
    gml_Script___scribble_error(param_1,param_2,&local_208,1,&local_128,ppuVar7,uVar15);
    local_168 = 0x1d;
    goto LAB_140494524;
  }
  local_168 = 0x20;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141ddf178 + 8))(DAT_141ddf178,DAT_141a08a78);
  if (puVar4 != &local_1e8) {
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  local_138 = &local_1e8;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14049326b:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_1d8) goto LAB_14049326b;
  }
  local_130 = &local_1d8;
  ppuVar7 = &local_138;
  uVar13 = CONCAT44(uVar15,DAT_141a01478);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_268,2,uVar13,ppuVar7);
  uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_168 = 0x22;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uStack_20c = DAT_141dd3734;
    uStack_210 = DAT_141dd3730;
    if ((1 << ((byte)DAT_141dd3734 & 0x1f) & 0x46U) == 0) {
      local_218 = DAT_141dd3728;
    }
    else {
      FUN_1400419b0(&local_218,&DAT_141dd3728);
    }
    local_24c = DAT_141dd3744;
    local_250 = DAT_141dd3740;
    if ((1 << ((byte)DAT_141dd3744 & 0x1f) & 0x46U) == 0) {
      local_258 = DAT_141dd3738;
    }
    else {
      FUN_1400419b0(&local_258,&DAT_141dd3738);
    }
    if (0 < param_4) {
      puVar3 = (undefined8 *)*param_5;
    }
    uVar11 = 1 << ((byte)local_24c & 0x1f) & 0x46;
    local_220 = local_250;
    local_21c = local_24c;
    if (uVar11 == 0) {
      local_228 = local_258;
    }
    else {
      FUN_1400419b0(&local_228,&local_258);
    }
    FUN_1400460e0(&local_228,puVar3);
    uStack_22c = local_21c;
    uStack_230 = local_220;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
      local_238 = local_228;
    }
    else {
      FUN_1400419b0(&local_238,&local_228);
    }
    FUN_1400460e0(&local_238,&local_218);
    local_278 = local_238;
    uStack_270 = uStack_230;
    uStack_26c = uStack_22c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_278);
    uVar15 = 0x10;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if (uVar11 != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_128 = &local_1c8;
    gml_Script___scribble_error(param_1,param_2,&local_248,1,&local_128,ppuVar7,uVar15);
    local_168 = 0x23;
    goto LAB_140494524;
  }
  local_168 = 0x26;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141ddf178 + 8))(DAT_141ddf178,DAT_141a09168);
  if (puVar4 != &local_1e8) {
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  local_138 = &local_1e8;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140493582:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_1d8) goto LAB_140493582;
  }
  local_130 = &local_1d8;
  ppuVar7 = &local_138;
  uVar13 = CONCAT44(uVar15,DAT_141a01478);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_268,2,uVar13,ppuVar7);
  uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_168 = 0x28;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uStack_20c = DAT_141dd37a4;
    uStack_210 = DAT_141dd37a0;
    if ((1 << ((byte)DAT_141dd37a4 & 0x1f) & 0x46U) == 0) {
      local_218 = DAT_141dd3798;
    }
    else {
      FUN_1400419b0(&local_218,&DAT_141dd3798);
    }
    local_24c = DAT_141dd3784;
    local_250 = DAT_141dd3780;
    if ((1 << ((byte)DAT_141dd3784 & 0x1f) & 0x46U) == 0) {
      local_258 = DAT_141dd3778;
    }
    else {
      FUN_1400419b0(&local_258,&DAT_141dd3778);
    }
    if (0 < param_4) {
      puVar3 = (undefined8 *)*param_5;
    }
    uVar11 = 1 << ((byte)local_24c & 0x1f) & 0x46;
    local_220 = local_250;
    local_21c = local_24c;
    if (uVar11 == 0) {
      local_228 = local_258;
    }
    else {
      FUN_1400419b0(&local_228,&local_258);
    }
    FUN_1400460e0(&local_228,puVar3);
    uStack_22c = local_21c;
    uStack_230 = local_220;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
      local_238 = local_228;
    }
    else {
      FUN_1400419b0(&local_238,&local_228);
    }
    FUN_1400460e0(&local_238,&local_218);
    local_278 = local_238;
    uStack_270 = uStack_230;
    uStack_26c = uStack_22c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_278);
    uVar15 = 0x40;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if (uVar11 != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_128 = &local_1c8;
    gml_Script___scribble_error(param_1,param_2,&local_248,1,&local_128,ppuVar7,uVar15);
    local_168 = 0x29;
    goto LAB_140494524;
  }
  local_168 = 0x2c;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141ddf178 + 8))(DAT_141ddf178,DAT_141a07b18);
  local_228 = puVar4;
  if (puVar4 != &local_1e8) {
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  local_138 = &local_1e8;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_1404938a1:
    local_278 = (undefined8 *)*puVar8;
    uStack_270 = *(undefined4 *)(puVar8 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
  }
  else {
    puVar8 = (undefined8 *)*param_5;
    if (puVar8 != &local_1d8) goto LAB_1404938a1;
  }
  local_130 = &local_1d8;
  uVar5 = CONCAT44(uVar15,DAT_1419ff4f8);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_268,2,uVar5,&local_138);
  uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar8 != &local_100) {
    local_278 = (undefined8 *)*puVar8;
    uStack_270 = *(undefined4 *)(puVar8 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_278);
  }
  local_168 = 0x2d;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_138 = &local_100;
  uVar13 = CONCAT44(uVar15,DAT_1419fdc08);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
  uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_168 = 0x2f;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_130 = &local_100;
    ppuVar7 = &local_130;
    uVar13 = CONCAT44(uVar15,DAT_141a014a8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_248,1,uVar13,ppuVar7);
    uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
LAB_140493c99:
      local_168 = 0x35;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_138 = &local_100;
      uVar13 = CONCAT44(uVar15,DAT_141a07928);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_248,1,uVar13,&local_138);
      uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') {
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        local_e0 = 0;
        local_d8 = 0;
        local_d4 = 5;
        local_118 = &local_100;
        ppuVar7 = &local_118;
        puVar4 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_e0,1,CONCAT44(uVar15,DAT_1419f7628),ppuVar7);
        local_94 = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_98 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
          local_a0 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_a0,puVar4);
        }
        puVar4 = &local_a0;
        uVar11 = 0x802;
      }
      else {
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        local_160 = 0;
        local_158 = 0;
        local_154 = 5;
        local_128 = &local_100;
        ppuVar7 = &local_128;
        puVar4 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_160,1,CONCAT44(uVar15,DAT_1419fcb18),ppuVar7);
        uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_270 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
          local_278 = (undefined8 *)*puVar4;
        }
        else {
          FUN_1400419b0(&local_278,puVar4);
        }
        puVar4 = &local_278;
        uVar11 = 0x401;
      }
      local_a4 = DAT_141dd3754;
      local_a8 = DAT_141dd3750;
      if ((1 << ((byte)DAT_141dd3754 & 0x1f) & 0x46U) == 0) {
        local_b0 = DAT_141dd3748;
      }
      else {
        FUN_1400419b0(&local_b0,&DAT_141dd3748);
      }
      local_b4 = DAT_141dd3764;
      local_b8 = DAT_141dd3760;
      if ((1 << ((byte)DAT_141dd3764 & 0x1f) & 0x46U) == 0) {
        local_c0 = DAT_141dd3758;
      }
      else {
        FUN_1400419b0(&local_c0,&DAT_141dd3758);
      }
      uStack_22c = DAT_141dd36f4;
      uStack_230 = DAT_141dd36f0;
      if ((1 << ((byte)DAT_141dd36f4 & 0x1f) & 0x46U) == 0) {
        local_238 = DAT_141dd36e8;
      }
      else {
        FUN_1400419b0(&local_238,&DAT_141dd36e8);
      }
      if (param_4 < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*param_5;
      }
      bVar10 = (byte)uStack_22c & 0x1f;
      local_250 = uStack_230;
      local_24c = uStack_22c;
      if ((1 << bVar10 & 0x46U) == 0) {
        local_258 = local_238;
      }
      else {
        FUN_1400419b0(&local_258,&local_238);
      }
      FUN_1400460e0(&local_258,puVar8);
      local_e4 = local_24c;
      local_e8 = local_250;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
        local_f0 = local_258;
      }
      else {
        FUN_1400419b0(&local_f0,&local_258);
      }
      FUN_1400460e0(&local_f0,&local_c0);
      local_1ec = local_e4;
      local_1f0 = local_e8;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_f0;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_f0);
      }
      FUN_1400460e0(&local_1f8,puVar4);
      uStack_20c = local_1ec;
      uStack_210 = local_1f0;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
        local_218 = local_1f8;
      }
      else {
        FUN_1400419b0(&local_218,&local_1f8);
      }
      FUN_1400460e0(&local_218,&local_b0);
      local_148 = (undefined4)local_218;
      uStack_144 = local_218._4_4_;
      uStack_140 = uStack_210;
      uStack_13c = uStack_20c;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_148);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      uVar16 = uVar11;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << bVar10 & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((uVar11 & 2) != 0) {
        uVar11 = uVar11 & 0xffff0ffd;
        uVar16 = uVar11;
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
      }
      if (((uVar11 & 1) != 0) && ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_278);
      }
      local_110 = local_198;
      ppuVar14 = &local_110;
      gml_Script___scribble_error(param_1,param_2,&local_268,1,ppuVar14,ppuVar7,uVar16);
      uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    }
    else {
      uStack_26c = 0;
      local_278 = (undefined8 *)0x0;
      iVar2 = FUN_140e851f0(&local_100,&local_278,DAT_141955260,1);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if (iVar2 == -2 || -1 < iVar2) goto LAB_140493c99;
      local_168 = 0x31;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      uStack_20c = DAT_141dd3714;
      uStack_210 = DAT_141dd3710;
      if ((1 << ((byte)DAT_141dd3714 & 0x1f) & 0x46U) == 0) {
        local_218 = DAT_141dd3708;
      }
      else {
        FUN_1400419b0(&local_218,&DAT_141dd3708);
      }
      local_24c = DAT_141dd36f4;
      local_250 = DAT_141dd36f0;
      if ((1 << ((byte)DAT_141dd36f4 & 0x1f) & 0x46U) == 0) {
        local_258 = DAT_141dd36e8;
      }
      else {
        FUN_1400419b0(&local_258,&DAT_141dd36e8);
      }
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)*param_5;
      }
      uVar11 = 1 << ((byte)local_24c & 0x1f) & 0x46;
      local_1f0 = local_250;
      local_1ec = local_24c;
      if (uVar11 == 0) {
        local_1f8 = local_258;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_258);
      }
      FUN_1400460e0(&local_1f8,puVar4);
      uStack_22c = local_1ec;
      uStack_230 = local_1f0;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
        local_238 = local_1f8;
      }
      else {
        FUN_1400419b0(&local_238,&local_1f8);
      }
      FUN_1400460e0(&local_238,&local_218);
      local_278 = local_238;
      uStack_270 = uStack_230;
      uStack_26c = uStack_22c;
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_278);
      uVar15 = 0x100;
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if (uVar11 != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_128 = &local_1c8;
      ppuVar6 = &local_128;
      gml_Script___scribble_error(param_1,param_2,&local_208,1,ppuVar6,ppuVar7,uVar15);
      uVar15 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
    }
    puVar4 = local_228;
  }
  local_168 = 0x39;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if (puVar4 != &local_1e8) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_148);
  }
  local_138 = &local_1e8;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1404942bf:
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_1d8) goto LAB_1404942bf;
  }
  local_130 = &local_1d8;
  if ((param_4 < 2) || (puVar3 = (undefined8 *)param_5[1], puVar3 != &local_1c8)) {
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_148);
  }
  local_128 = &local_1c8;
  FUN_140e634e0(param_1,param_2,&local_268,3,CONCAT44(uVar15,DAT_1419ff3d8),&local_138);
  local_168 = 0x3a;
LAB_140494524:
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_1e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

