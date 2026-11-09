// gml_Object_oPickupIronMedium_Create_0 @ 0x140be40f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPickupIronMedium_Create_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe70;
  undefined1 **ppuVar11;
  undefined8 local_188;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  ulonglong local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  uint uStack_c0;
  uint uStack_bc;
  ulonglong local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_140 = "gml_Object_oPickupIronLarge_Create_0";
  local_138 = 0;
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_138 = 3;
  FUN_140e98b30(local_res8,local_res10);
  local_138 = 5;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_130 = 0;
  local_128 = 0;
  local_124 = 5;
  uStack_17c = 6;
  local_188 = local_res8;
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_98,uVar9,in_stack_fffffffffffffe70);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  local_188 = local_res8;
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_a8,uVar9,in_stack_fffffffffffffe70);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  local_188 = local_res8;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a1b910,0x80000000,&local_b8,uVar9,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_168 = local_98;
  uStack_160 = uStack_90;
  uStack_15c = uStack_8c;
  if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_168);
  local_78 = local_108;
  local_168 = local_a8;
  uStack_160 = uStack_a0;
  uStack_15c = uStack_9c;
  if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_168);
  local_70 = local_f8;
  local_168 = local_b8;
  uStack_160 = uStack_b0;
  uStack_15c = uStack_ac;
  if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_168);
  local_68 = local_e8;
  uStack_15c = 0xf;
  local_168 = 0x100000000000051;
  local_88 = 0x100000000000051;
  uStack_80 = uStack_160;
  uStack_7c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_88);
  local_60 = local_d8;
  ppuVar11 = &local_78;
  uVar9 = CONCAT44(uVar10,DAT_141a0a7c8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_130,4,uVar9,ppuVar11);
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_138 = 7;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a9f8);
      FUN_140e609c0(local_res8);
      uStack_7c = 0xf;
      local_88 = 0x10000010000014b;
      if (&local_88 != puVar4) {
        local_178 = 0x14b;
        uStack_174 = 0x1000001;
        uStack_170 = uStack_80;
        uStack_16c = 0xf;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_178);
      }
      FUN_140e60910(1);
      local_138 = 8;
      puVar5 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a578b0);
      FUN_140e609c0(local_res8);
      uStack_15c = 0xf;
      local_168 = 0x100000100000030;
      if (&local_168 != puVar5) {
        local_178 = 0x30;
        uStack_174 = 0x1000001;
        uStack_170 = uStack_160;
        uStack_16c = 0xf;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_178);
      }
      FUN_140e60910(1);
      local_138 = 9;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57820);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x4000000000000000;
      local_138 = 10;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      uStack_17c = 6;
      local_188 = local_res10;
      FUN_140e87440(&local_188,DAT_141a0a828,0x80000000,&local_c8,uVar9 & 0xffffffffffffff00,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140e609c0(local_res8);
      if (&local_c8 != puVar4) {
        local_178 = (uint)local_c8;
        uStack_174 = local_c8._4_4_;
        uStack_170 = uStack_c0;
        uStack_16c = uStack_bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_178);
      }
      FUN_140e60910(1);
      local_138 = 0xc;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57380);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x4020000000000000;
      local_138 = 0xd;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57490);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x4024000000000000;
      local_138 = 0xe;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01aa8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x4008000000000000;
      local_138 = 0xf;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05568);
      FUN_140e609c0(local_res8);
      uVar10 = 1;
      puVar7 = (uint *)FUN_140e8da20(&local_130,local_res8,2,&DAT_1419eca30,&DAT_1419eca20);
      if (puVar7 != puVar6) {
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_178);
      }
      FUN_140e60910(1);
      local_138 = 0x10;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1d8a0);
      local_178 = _DAT_141dc7400;
      uStack_174 = uRam0000000141dc7404;
      uStack_170 = uRam0000000141dc7408;
      uStack_16c = uRam0000000141dc740c;
      if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_178);
      local_78 = local_108;
      FUN_140e609c0(local_res8);
      ppuVar11 = &local_78;
      uVar9 = CONCAT44(uVar10,DAT_141a0a0d8);
      puVar7 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar9,ppuVar11);
      if (puVar7 != puVar6) {
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_178);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  uVar10 = (undefined4)(uVar9 >> 0x20);
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_138 = 0x13;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
  local_178 = DAT_1419f5898 & 0xffffff;
  uStack_174 = (int)(DAT_1419f5898 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_174 == 0xf) {
    uStack_174 = 0x4000004;
  }
  else {
    uStack_174 = uStack_174 | 0x1000000;
  }
  uStack_15c = 0xf;
  local_168 = CONCAT44(uStack_174,DAT_1419f5898) & 0xffffffff00ffffff;
  uStack_170 = uStack_160;
  uStack_16c = 0xf;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_78 = local_108;
  local_178 = _DAT_141dda448;
  uStack_174 = uRam0000000141dda44c;
  uStack_170 = uRam0000000141dda450;
  uStack_16c = DAT_141dda454;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_178);
  local_70 = local_f8;
  uStack_15c = 0xf;
  local_168 = 0x10000010000018f;
  local_178 = 399;
  uStack_174 = 0x1000001;
  uStack_170 = uStack_160;
  uStack_16c = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_178);
  local_68 = local_e8;
  FUN_140e609c0(local_res8);
  puVar7 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_158,3,CONCAT44(uVar10,DAT_1419fd6d8),
                                 &local_78);
  if (puVar7 != puVar6) {
    local_178 = *puVar7;
    uStack_174 = puVar7[1];
    uStack_170 = puVar7[2];
    uStack_16c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_178);
  }
  FUN_140e60910(1);
  local_138 = 0x15;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56ba0);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_188,gml_Script_anon_342_gml_Object_oPickupIronMedium_Create_0,local_res8);
  if (&local_188 != puVar4) {
    local_178 = (uint)local_188;
    uStack_174 = local_188._4_4_;
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_178);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e60910(1);
  local_138 = 0x1c;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = 0x4000000000000000;
  FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_120);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return;
}

