// gml_Script____struct___135_level_set_dark_palette_temp_level_get_dark_pal @ 0x1403a0df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___135_level_set_dark_palette_temp_level_get_dark_pal
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 *local_88 [3];
  undefined8 local_70;
  byte local_64;
  
  local_d0 = "gml_Script_jump_predictor";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 10;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xc;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1403a0ed8:
    local_128 = *puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    FUN_140041b80(&local_c0,&local_128);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_c0) goto LAB_1403a0ed8;
  }
  local_c8 = 0xd;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 == &local_e8) goto LAB_1403a0f48;
  }
  local_128 = *puVar3;
  uStack_120 = *(undefined4 *)(puVar3 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_128);
LAB_1403a0f48:
  uStack_ec = 0;
  local_f8 = 0;
  local_c8 = 0x10;
  if (param_4 < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
  }
  local_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_90 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddea10) &&
     (_Init_thread_header(&DAT_141ddea10), DAT_141ddea10 == -1)) {
    _DAT_141dde9f4 = DAT_141dd2404;
    _DAT_141dde9f0 = DAT_141dd2400;
    if ((1 << ((byte)DAT_141dd2404 & 0x1f) & 0x46U) == 0) {
      _DAT_141dde9e8 = DAT_141dd23f8;
    }
    else {
      FUN_1400419b0(&DAT_141dde9e8,&DAT_141dd23f8);
    }
    DAT_141dde9f8 = 0;
    _DAT_141ddea08 = DAT_141dd23f4;
    _DAT_141ddea04 = DAT_141dd23f0;
    if ((1 << ((byte)DAT_141dd23f4 & 0x1f) & 0x46U) == 0) {
      _DAT_141dde9fc = DAT_141dd23e8;
    }
    else {
      FUN_1400419b0(&DAT_141dde9fc,&DAT_141dd23e8);
    }
    _DAT_141ddea0c = 1;
    atexit((_func_5014 *)&LAB_14147c900);
    _Init_thread_footer(&DAT_141ddea10);
  }
  uVar4 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141dde9e8 + (longlong)(int)uVar4 * 0x14,&local_98,DAT_141955260,0);
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    bVar1 = (byte)local_10c;
    if (iVar2 == 0) {
      if ((&DAT_141dde9f8)[(longlong)(int)uVar4 * 5] == 0) {
        local_c8 = 0x13;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50();
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        local_88[0] = &local_e8;
        local_fc = 0;
        local_108 = 0x4000000000000000;
        FUN_140042560(&local_108,&local_c0);
        puVar3 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar6,DAT_1419f4e48),local_88);
        uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
        uStack_120 = *(undefined4 *)(puVar3 + 1);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
          local_128 = *puVar3;
        }
        else {
          FUN_1400419b0(&local_128,puVar3);
        }
        FUN_140046500(&local_128,&local_108);
        local_a8 = (undefined4)local_128;
        uStack_a4 = local_128._4_4_;
        uStack_a0 = uStack_120;
        uStack_9c = uStack_11c;
        FUN_140041b80(&local_f8,&local_a8);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
      }
      else {
        if ((&DAT_141dde9f8)[(longlong)(int)uVar4 * 5] != 1) break;
        local_c8 = 0x17;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        local_fc = 0;
        local_108 = 0x4000000000000000;
        FUN_140042560(&local_108,&local_c0);
        uStack_11c = local_fc;
        uStack_120 = local_100;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
          local_128 = local_108;
        }
        else {
          FUN_1400419b0(&local_128,&local_108);
        }
        FUN_140042560(&local_128,&local_e8);
        local_a8 = (undefined4)local_128;
        uStack_a4 = local_128._4_4_;
        uStack_a0 = uStack_120;
        uStack_9c = uStack_11c;
        if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_70);
        }
        FUN_140041b80(&local_70,&local_a8);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_88[0] = &local_70;
        puVar3 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar6,DAT_1419fd718),local_88);
        if (puVar3 != &local_f8) {
          local_a8 = *(undefined4 *)puVar3;
          uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
          uStack_a0 = *(undefined4 *)(puVar3 + 1);
          uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
          FUN_140041b80(&local_f8,&local_a8);
        }
      }
      local_c8 = 0x1f;
      if (&local_f8 == param_3) goto LAB_1403a1474;
      local_a8 = (undefined4)local_f8;
      uStack_a4 = local_f8._4_4_;
      uStack_a0 = uStack_f0;
      uStack_9c = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      puVar3 = (undefined8 *)&local_a8;
      goto LAB_1403a146b;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  local_c8 = 0x1b;
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  local_128 = CONCAT44(uRam0000000141dd23dc,_DAT_141dd23d8);
  uStack_120 = uRam0000000141dd23e0;
  uStack_11c = DAT_141dd23e4;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_128);
  local_88[0] = &local_70;
  FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar6,DAT_141a03478),local_88);
  local_c8 = 0x1c;
  if (param_3 != &DAT_1419df7b0) {
    local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar3 = &local_128;
LAB_1403a146b:
    FUN_140041b80(param_3,puVar3);
  }
LAB_1403a1474:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

