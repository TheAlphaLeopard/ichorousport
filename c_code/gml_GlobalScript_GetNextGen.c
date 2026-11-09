// gml_GlobalScript_GetNextGen @ 0x14028dd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_GetNextGen
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 uVar12;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar13;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_f0 = "gml_Script_WindowApplyMode";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x5f;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_138,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  uVar7 = 0;
  local_158 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_16c = 0;
  local_178 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x61;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_a4 = *(undefined4 *)((longlong)param_5 + 0xc);
  local_a8 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) == 0) {
    local_b0 = *param_5;
  }
  else {
    FUN_1400419b0(&local_b0);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddda8) &&
     (_Init_thread_header(&DAT_141dddda8), DAT_141dddda8 == -1)) {
    _DAT_141dddd84 = 0;
    _DAT_141dddd78 = 0x4000000000000000;
    _DAT_141dddd98 = 0;
    _DAT_141dddd8c = 0x3ff0000000000000;
    _DAT_141dddd9c = 1;
    atexit((_func_5014 *)&LAB_141470e20);
    _Init_thread_footer(&DAT_141dddda8);
  }
  do {
    iVar3 = FUN_140e851f0(&DAT_141dddd78 + (longlong)(int)uVar7 * 0x14,&local_b0,DAT_141955260,0);
    uVar12 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    bVar1 = (byte)local_16c;
    if (iVar3 == 0) {
      if ((&DAT_141dddd88)[(longlong)(int)uVar7 * 5] == 0) {
        local_e8 = 100;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        local_168 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_160 = uRam00000001419df7c8;
        uStack_15c = uRam00000001419df7cc;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_168);
        local_c8 = local_128;
        ppuVar9 = &local_c8;
        uVar5 = 1;
        uVar4 = DAT_141a57f00;
      }
      else {
        if ((&DAT_141dddd88)[(longlong)(int)uVar7 * 5] != 1) break;
        local_e8 = 0x68;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        local_168 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_160 = uRam00000001419df7a8;
        uStack_15c = uRam00000001419df7ac;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_168);
        local_d0 = local_138;
        FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar12,DAT_141a57f80),&local_d0);
        local_e8 = 0x69;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        puVar6 = (undefined8 *)gml_Script_WindowGetMode(param_1,param_2,&local_178,0,0);
        if (puVar6 != &local_158) {
          local_168 = *puVar6;
          uStack_160 = *(undefined4 *)(puVar6 + 1);
          uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_168);
        }
        local_e8 = 0x6a;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        FUN_140e87170(&local_158,DAT_1419fe0e8,0x80000000,&local_48,param_1,param_2);
        uVar10 = param_1;
        uVar13 = param_2;
        FUN_140e87170(&local_158,DAT_1419fe158,0x80000000,&local_58,param_1,param_2);
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_141a00fd8,0x80000000,&local_68,uVar10,uVar13);
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_141a01058,0x80000000,&local_78,uVar10,
                      uVar13 & 0xffffffffffffff00);
        uVar12 = (undefined4)(uVar10 >> 0x20);
        local_168 = local_48;
        uStack_160 = uStack_40;
        uStack_15c = uStack_3c;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_168);
        local_d0 = local_138;
        local_168 = local_58;
        uStack_160 = uStack_50;
        uStack_15c = uStack_4c;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_168);
        local_c8 = local_128;
        local_168 = local_68;
        uStack_160 = uStack_60;
        uStack_15c = uStack_5c;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_168);
        local_c0 = local_118;
        local_168 = local_78;
        uStack_160 = uStack_70;
        uStack_15c = uStack_6c;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_168);
        local_b8 = local_108;
        ppuVar9 = &local_d0;
        uVar5 = 4;
        uVar4 = DAT_141a57e90;
      }
      uVar11 = CONCAT44(uVar12,uVar4);
      FUN_140e634e0(param_1,param_2,&local_178,uVar5,uVar11,ppuVar9);
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
      goto LAB_14028e4c9;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  local_e8 = 0x6e;
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_168 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_160 = uRam00000001419df7c8;
  uStack_15c = uRam00000001419df7cc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_168);
  local_d0 = local_138;
  ppuVar9 = &local_d0;
  uVar10 = CONCAT44(uVar12,DAT_141a57f80);
  FUN_140e634e0(param_1,param_2,&local_178,1,uVar10,ppuVar9);
  local_e8 = 0x6f;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  FUN_140e87440(uVar5,DAT_141a57ed0,0x80000000,&local_88,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_168 = local_88;
  uStack_160 = uStack_80;
  uStack_15c = uStack_7c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_168);
  local_d0 = local_138;
  ppuVar9 = &local_d0;
  puVar6 = (undefined8 *)
           gml_Script____struct___97_WindowSetMode_GameViewRect
                     (param_1,param_2,&local_178,1,ppuVar9);
  uVar12 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  if (puVar6 != &local_e0) {
    local_168 = *puVar6;
    uStack_160 = *(undefined4 *)(puVar6 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_168);
  }
  FUN_140e87930(uVar5,DAT_141a57ed0,0x80000000,&local_e0);
LAB_14028e4c9:
  local_e8 = 0x72;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uStack_15c = 0xf;
  local_168 = 0x100000000000058;
  local_38 = 0x58;
  uStack_34 = 0x1000000;
  uStack_30 = uStack_160;
  uStack_2c = 0xf;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_38);
  local_d0 = local_138;
  ppuVar9 = &local_d0;
  uVar10 = CONCAT44(uVar12,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar10,ppuVar9);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_e8 = 0x72;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uStack_15c = 0xf;
    local_168 = 0x100000000000058;
    FUN_140e87440(&local_168,DAT_141a57ff0,0x80000000,&local_a0,uVar10 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_15c = 0xf;
    local_168 = 0x100000000000058;
    uVar5 = FUN_140069500(&local_168);
    FUN_140e63610(uVar5,param_2,&local_148,0,&local_a0,0);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
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
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

