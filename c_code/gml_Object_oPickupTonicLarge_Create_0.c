// gml_Object_oPickupTonicLarge_Create_0 @ 0x140be6f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPickupTonicLarge_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar10;
  ulonglong uVar9;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_e0 = "gml_Object_oPickupKey_Create_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  uVar10 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_d8 = 3;
  FUN_140e98b30(local_res8,local_res10);
  local_d8 = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
  uVar8 = (int)(DAT_1419f5898 | 0x5000000) >> 0x18 & 0xff;
  if (uVar8 == 0xf) {
    uVar8 = 0x4000004;
  }
  else {
    uVar8 = uVar8 | 0x1000000;
  }
  uStack_15c = 0xf;
  local_168 = CONCAT44(uVar8,DAT_1419f5898) & 0xffffffff00ffffff;
  local_178 = (longlong *)(CONCAT44(uVar8,DAT_1419f5898) & 0xffffffff00ffffff);
  uStack_170 = uStack_160;
  uStack_16c = 0xf;
  if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_c0 = local_128;
  local_168 = CONCAT44(uRam0000000141dda47c,_DAT_141dda478);
  uStack_160 = uRam0000000141dda480;
  uStack_15c = DAT_141dda484;
  if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b8 = local_118;
  uStack_15c = 0xf;
  local_168 = 0x100000100000190;
  local_178 = (longlong *)0x100000100000190;
  uStack_170 = uStack_160;
  uStack_16c = 0xf;
  if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_b0 = local_108;
  FUN_140e609c0(local_res8);
  ppuVar11 = &local_c0;
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_148,3,uVar9,ppuVar11);
  if (puVar4 != puVar3) {
    local_168 = *puVar4;
    uStack_160 = *(undefined4 *)(puVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_168);
  }
  FUN_140e60910(1);
  local_d8 = 6;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_16c = 6;
  local_178 = local_res8;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_68,uVar9,uVar12);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  local_178 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_78,uVar9,uVar12);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  local_178 = local_res8;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_178,DAT_141a1b910,0x80000000,&local_88,uVar9,uVar12 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_168 = local_68;
  uStack_160 = uStack_60;
  uStack_15c = uStack_5c;
  if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_168);
  local_c0 = local_128;
  local_168 = local_78;
  uStack_160 = uStack_70;
  uStack_15c = uStack_6c;
  if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b8 = local_118;
  local_168 = local_88;
  uStack_160 = uStack_80;
  uStack_15c = uStack_7c;
  if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_168);
  local_b0 = local_108;
  uStack_15c = 0xf;
  local_168 = 0x100000000000051;
  local_178 = (longlong *)0x100000000000051;
  uStack_170 = uStack_160;
  uStack_16c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_178);
  local_a8 = local_f8;
  ppuVar11 = &local_c0;
  uVar9 = CONCAT44(uVar10,DAT_141a0a7c8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_148,4,uVar9,ppuVar11);
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_d8 = 8;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a9f8);
      FUN_140e609c0(local_res8);
      uStack_15c = 0xf;
      local_168 = 0x10000010000014b;
      if (&local_168 != puVar3) {
        local_158 = 0x14b;
        uStack_154 = 0x1000001;
        uStack_150 = uStack_160;
        uStack_14c = 0xf;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_158);
      }
      FUN_140e60910(1);
      local_d8 = 9;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      uStack_16c = 6;
      local_178 = (longlong *)local_res10;
      FUN_140e87440(&local_178,DAT_141a0a828,0x80000000,&local_98,uVar9 & 0xffffffffffffff00,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140e609c0(local_res8);
      if (&local_98 != puVar3) {
        local_158 = (undefined4)local_98;
        uStack_154 = local_98._4_4_;
        uStack_150 = uStack_90;
        uStack_14c = uStack_8c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_158);
      }
      FUN_140e60910(1);
      local_d8 = 0xb;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57380);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      *puVar3 = 0x4020000000000000;
      local_d8 = 0xc;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57490);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      *puVar3 = 0x4024000000000000;
      local_d8 = 0xd;
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05568);
      FUN_140e609c0(local_res8);
      uVar10 = 1;
      puVar7 = (undefined4 *)FUN_140e8da20(&local_148,local_res8,2,&DAT_1419ecac0,&DAT_1419ecab0);
      if (puVar7 != puVar6) {
        local_158 = *puVar7;
        uStack_154 = puVar7[1];
        uStack_150 = puVar7[2];
        uStack_14c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_158);
      }
      FUN_140e60910(1);
      local_d8 = 0xe;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1d8a0);
      local_158 = _DAT_141dc7430;
      uStack_154 = uRam0000000141dc7434;
      uStack_150 = uRam0000000141dc7438;
      uStack_14c = uRam0000000141dc743c;
      if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_c0 = local_128;
      FUN_140e609c0(local_res8);
      ppuVar11 = &local_c0;
      uVar9 = CONCAT44(uVar10,DAT_141a0a0d8);
      puVar7 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_138,1,uVar9,ppuVar11);
      if (puVar7 != puVar6) {
        local_158 = *puVar7;
        uStack_154 = puVar7[1];
        uStack_150 = puVar7[2];
        uStack_14c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_158);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  uVar10 = (undefined4)(uVar9 >> 0x20);
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_d8 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56ba0);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_178,gml_Script_anon_344_gml_Object_oPickupTonicLarge_Create_0,local_res8);
  if (&local_178 != puVar3) {
    local_158 = (undefined4)local_178;
    uStack_154 = local_178._4_4_;
    uStack_150 = uStack_170;
    uStack_14c = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_158);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_d8 = 0x17;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_15c = 0xf;
  local_168 = 0x1000002000000dd;
  local_158 = 0xdd;
  uStack_154 = 0x1000002;
  uStack_150 = uStack_160;
  uStack_14c = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_158);
  local_c0 = local_128;
  local_158 = _DAT_1419ecad0;
  uStack_154 = uRam00000001419ecad4;
  uStack_150 = uRam00000001419ecad8;
  uStack_14c = uRam00000001419ecadc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_b8 = local_118;
  local_158 = _DAT_1419df7a0;
  uStack_154 = uRam00000001419df7a4;
  uStack_150 = uRam00000001419df7a8;
  uStack_14c = uRam00000001419df7ac;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_158);
  local_b0 = local_108;
  FUN_140e634e0(local_res8,local_res10,&local_138,3,CONCAT44(uVar10,DAT_141a0a2e8),&local_c0);
  local_d8 = 0x19;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_d0);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
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
  _eh_vector_destructor_iterator_(local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

