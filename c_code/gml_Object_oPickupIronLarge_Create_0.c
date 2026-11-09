// gml_Object_oPickupIronLarge_Create_0 @ 0x140be3330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPickupIronLarge_Create_0(longlong *param_1,undefined8 param_2)

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
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_110 = "gml_Object_oPickupBrain_Create_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  uVar10 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_108 = 3;
  FUN_140e98b30(local_res8,local_res10);
  local_108 = 5;
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
  uStack_14c = 0xf;
  local_158 = CONCAT44(uVar8,DAT_1419f5898) & 0xffffffff00ffffff;
  local_168 = (longlong *)(CONCAT44(uVar8,DAT_1419f5898) & 0xffffffff00ffffff);
  uStack_160 = uStack_150;
  uStack_15c = 0xf;
  if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_168);
  local_78 = local_f8;
  local_158 = CONCAT44(uRam0000000141dda43c,_DAT_141dda438);
  uStack_150 = uRam0000000141dda440;
  uStack_14c = DAT_141dda444;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_70 = local_e8;
  uStack_14c = 0xf;
  local_158 = 0x10000010000018e;
  local_168 = (longlong *)0x10000010000018e;
  uStack_160 = uStack_150;
  uStack_15c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  local_68 = local_d8;
  FUN_140e609c0(local_res8);
  ppuVar11 = &local_78;
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_148,3,uVar9,ppuVar11);
  if (puVar4 != puVar3) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 7;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_15c = 6;
  local_168 = local_res8;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_88,uVar9,uVar12);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  local_168 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_98,uVar9,uVar12);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  local_168 = local_res8;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_141a1b910,0x80000000,&local_a8,uVar9,uVar12 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_158 = local_88;
  uStack_150 = uStack_80;
  uStack_14c = uStack_7c;
  if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_78 = local_f8;
  local_158 = local_98;
  uStack_150 = uStack_90;
  uStack_14c = uStack_8c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_70 = local_e8;
  local_158 = local_a8;
  uStack_150 = uStack_a0;
  uStack_14c = uStack_9c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_68 = local_d8;
  uStack_14c = 0xf;
  local_158 = 0x100000000000051;
  local_168 = (longlong *)0x100000000000051;
  uStack_160 = uStack_150;
  uStack_15c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_168);
  local_60 = local_c8;
  ppuVar11 = &local_78;
  uVar9 = CONCAT44(uVar10,DAT_141a0a7c8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_148,4,uVar9,ppuVar11);
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_108 = 9;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a9f8);
      FUN_140e609c0(local_res8);
      uStack_14c = 0xf;
      local_158 = 0x10000010000014b;
      if (&local_158 != puVar3) {
        local_138 = 0x14b;
        uStack_134 = 0x1000001;
        uStack_130 = uStack_150;
        uStack_12c = 0xf;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_138);
      }
      FUN_140e60910(1);
      local_108 = 10;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      uStack_15c = 6;
      local_168 = (longlong *)local_res10;
      FUN_140e87440(&local_168,DAT_141a0a828,0x80000000,&local_b8,uVar9 & 0xffffffffffffff00,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140e609c0(local_res8);
      if (&local_b8 != puVar3) {
        local_138 = (undefined4)local_b8;
        uStack_134 = local_b8._4_4_;
        uStack_130 = uStack_b0;
        uStack_12c = uStack_ac;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_138);
      }
      FUN_140e60910(1);
      local_108 = 0xc;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57380);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      *puVar3 = 0x4020000000000000;
      local_108 = 0xd;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57490);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      *puVar3 = 0x4024000000000000;
      local_108 = 0xe;
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05568);
      FUN_140e609c0(local_res8);
      uVar10 = 1;
      puVar7 = (undefined4 *)FUN_140e8da20(&local_148,local_res8,2,&DAT_1419eca00,&DAT_1419ec9f0);
      if (puVar7 != puVar6) {
        local_138 = *puVar7;
        uStack_134 = puVar7[1];
        uStack_130 = puVar7[2];
        uStack_12c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_138);
      }
      FUN_140e60910(1);
      local_108 = 0xf;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1d8a0);
      local_138 = _DAT_141dc73f0;
      uStack_134 = uRam0000000141dc73f4;
      uStack_130 = uRam0000000141dc73f8;
      uStack_12c = uRam0000000141dc73fc;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_138);
      local_78 = local_f8;
      FUN_140e609c0(local_res8);
      ppuVar11 = &local_78;
      uVar9 = CONCAT44(uVar10,DAT_141a0a0d8);
      puVar7 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_128,1,uVar9,ppuVar11);
      if (puVar7 != puVar6) {
        local_138 = *puVar7;
        uStack_134 = puVar7[1];
        uStack_130 = puVar7[2];
        uStack_12c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_138);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_108 = 0x12;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56ba0);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_168,gml_Script_anon_342_gml_Object_oPickupIronLarge_Create_0,local_res8);
  if (&local_168 != puVar3) {
    local_138 = (undefined4)local_168;
    uStack_134 = local_168._4_4_;
    uStack_130 = uStack_160;
    uStack_12c = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_138);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e60910(1);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
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
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}

