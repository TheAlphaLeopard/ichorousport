// gml_Script____struct___264_anon_28602_DefineTrinkets_TRINKETSINIT @ 0x140605a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___264_anon_28602_DefineTrinkets_TRINKETSINIT
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  undefined8 *local_40;
  
  local_1b0 = "gml_Script_anon@27970@DefineTrinkets@TRINKETSINIT";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x416;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,10,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_1dc = 0xffffff;
  local_1e8 = (undefined1 *)0x0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x417;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_140605bd5:
    local_228 = *(undefined4 *)puVar7;
    uStack_224 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_220 = *(undefined4 *)(puVar7 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_228);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_118) goto LAB_140605bd5;
  }
  local_80 = &local_118;
  ppuVar10 = &local_80;
  uVar9 = CONCAT44(uVar2,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar9,ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1a8 = 0x417;
    goto LAB_14060639e;
  }
  local_1a8 = 0x418;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_148,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  local_228 = (undefined4)local_148;
  uStack_224 = local_148._4_4_;
  uStack_220 = uStack_140;
  uStack_21c = uStack_13c;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_228);
  local_1a8 = 0x419;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_88 = &local_208;
  ppuVar10 = &local_88;
  uVar9 = CONCAT44(uVar2,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar9,ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1a8 = 0x419;
    goto LAB_14060639e;
  }
  local_1a8 = 0x41a;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_1419ffb48,0x80000000,&local_158,uVar9,uVar11);
  cVar1 = FUN_140e491e0(&local_158);
  if (cVar1 != '\0') goto LAB_140605ee7;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_1419f59d8,0x80000000,&local_168,uVar9,uVar11);
  FUN_140e87440(uVar4,DAT_1419f6028,0x80000000,&local_178,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  local_228 = (undefined4)local_178;
  uStack_224 = local_178._4_4_;
  uStack_220 = uStack_170;
  uStack_21c = uStack_16c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_228);
  local_88 = &local_128;
  switch(local_1fc) {
  default:
switchD_140605e33_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_208;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_208 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140605e33_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_208);
    uVar4 = FUN_140e87250(uVar2);
  }
  uVar4 = FUN_140e63610(uVar4,param_2,&local_1f8,1,&local_168,&local_88);
  uStack_20c = 0;
  local_218 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar4,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar3 != 0) {
LAB_140605ee7:
    local_1a8 = 0x41b;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    FUN_140e87170(&local_208,DAT_1419fe0e8,0x80000000,&local_188,param_1,param_2);
    uVar9 = param_1;
    uVar11 = param_2;
    FUN_140e87170(&local_208,DAT_1419fe158,0x80000000,&local_198,param_1,param_2);
    if (0 < param_4) {
      puVar8 = (undefined8 *)*param_5;
    }
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(puVar8,DAT_141a1eed0,0x80000000,&local_1e8,uVar9,uVar11 & 0xffffffffffffff00);
    uVar2 = (undefined4)(uVar9 >> 0x20);
    uStack_20c = local_1dc;
    uStack_210 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_218 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_218,&local_1e8);
    }
    uStack_21c = 7;
    local_228 = 0x2d;
    FUN_1400462a0(&local_218,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = (undefined4)local_218;
    uStack_224 = local_218._4_4_;
    uStack_220 = uStack_210;
    uStack_21c = uStack_20c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_228);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_80 = &local_118;
    uStack_20c = local_1dc;
    uStack_210 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_218 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_218,&local_1e8);
    }
    uStack_21c = 7;
    local_228 = 0x2d;
    FUN_1400460e0(&local_218,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = (undefined4)local_218;
    uStack_224 = local_218._4_4_;
    uStack_220 = uStack_210;
    uStack_21c = uStack_20c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_228);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_78 = local_108;
    local_228 = (undefined4)local_188;
    uStack_224 = local_188._4_4_;
    uStack_220 = uStack_180;
    uStack_21c = uStack_17c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_228);
    local_70 = local_f8;
    local_228 = (undefined4)local_198;
    uStack_224 = local_198._4_4_;
    uStack_220 = uStack_190;
    uStack_21c = uStack_18c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_228);
    local_68 = local_e8;
    puVar6 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_1d8,2,CONCAT44(uVar2,DAT_1419fdca8),&local_80);
    if (puVar6 != local_d8) {
      local_228 = *puVar6;
      uStack_224 = puVar6[1];
      uStack_220 = puVar6[2];
      uStack_21c = puVar6[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_228);
    }
    local_60 = local_d8;
    puVar6 = (undefined4 *)FUN_140e8da20(&local_1d8,param_1,2,&DAT_1419e6a60,&DAT_1419e6a10);
    if (puVar6 != local_c8) {
      local_228 = *puVar6;
      uStack_224 = puVar6[1];
      uStack_220 = puVar6[2];
      uStack_21c = puVar6[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_228);
    }
    local_58 = local_c8;
    local_228 = _DAT_1419e6a60;
    uStack_224 = uRam00000001419e6a64;
    uStack_220 = uRam00000001419e6a68;
    uStack_21c = uRam00000001419e6a6c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_228);
    local_50 = local_b8;
    puVar6 = (undefined4 *)FUN_140e8da20(&local_138,param_1,2,&DAT_1419e6bc0,&DAT_1419e69f0);
    if (puVar6 != local_a8) {
      local_228 = *puVar6;
      uStack_224 = puVar6[1];
      uStack_220 = puVar6[2];
      uStack_21c = puVar6[3];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_228);
    }
    local_48 = local_a8;
    local_40 = &local_208;
    gml_Script_get_blood_col(param_1,param_2,&local_1c8,7,&local_70);
  }
LAB_14060639e:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

