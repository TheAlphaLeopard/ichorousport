// gml_Object_oOfferingPickup_Create_0 @ 0x140b91230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oOfferingPickup_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar9;
  undefined8 local_158;
  uint uStack_150;
  uint uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100 [3];
  undefined4 local_f4;
  longlong *local_f0;
  uint local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  uint *local_48;
  
  local_120 = "gml_Object_oOfferingPickup_Create_0";
  local_118 = 0;
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = (longlong *)0x0;
  local_f4 = 0xffffff;
  local_100[0] = 0;
  local_100[1] = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_118 = 2;
  FUN_140e98b30(param_1,param_2);
  local_118 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f48c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_118 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56bc0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_118 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56be0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4040000000000000;
  local_118 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5128);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4054000000000000;
  local_118 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f50e8);
  uStack_14c = 0xd;
  local_158 = (longlong *)0x0;
  if (&local_158 != puVar1) {
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = uStack_150;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  local_118 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f50f8);
  uStack_14c = 0xd;
  local_158 = (longlong *)0x0;
  if (&local_158 != puVar1) {
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = uStack_150;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  local_118 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  uStack_14c = 6;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_f0,uVar7,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e609c0(param_1);
  uVar5 = FUN_140e78f00(10000);
  uStack_14c = local_e4;
  uStack_150 = local_e8;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
    local_158 = local_f0;
  }
  else {
    FUN_1400419b0(&local_158,&local_f0);
  }
  FUN_140162c50(&local_158,uVar5);
  if (&local_158 != puVar1) {
    local_148 = (uint)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_118 = 0xd;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_148 = _DAT_141dda018;
  uStack_144 = uRam0000000141dda01c;
  uStack_140 = uRam0000000141dda020;
  uStack_13c = DAT_141dda024;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  ppuVar9 = &local_68;
  uVar7 = CONCAT44(uVar8,DAT_141a1c640);
  puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar7,ppuVar9);
  if (puVar2 != local_100) {
    local_148 = *puVar2;
    uStack_144 = puVar2[1];
    uStack_140 = puVar2[2];
    uStack_13c = puVar2[3];
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_100);
    }
    FUN_140041b80(local_100,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_141a1b910,0x80000000,local_100);
  local_118 = 0xf;
  uStack_14c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_e0,uVar7,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140162d40(&local_e0,0x50);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_e0);
  local_118 = 0x11;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  local_110 = 0;
  local_108 = 0;
  local_104 = 5;
  puVar2 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5008);
  uStack_14c = 0xf;
  local_158 = (longlong *)0x10000020000016c;
  local_148 = 0x16c;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x10000020000016d;
  local_148 = 0x16d;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_60 = local_a8;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x10000020000016e;
  local_148 = 0x16e;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_148);
  local_58 = local_98;
  local_148 = DAT_1419ef3f8 & 0xffffff;
  uStack_144 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_144 == 0xf) {
    uStack_144 = 0x4000004;
  }
  else {
    uStack_144 = uStack_144 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)(CONCAT44(uStack_144,DAT_1419ef3f8) & 0xffffffff00ffffff);
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_148);
  uVar4 = CONCAT44(uVar8,DAT_1419fdca8);
  local_50 = local_88;
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_110,3,uVar4,&local_68);
  uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != local_78) {
    local_148 = *puVar3;
    uStack_144 = puVar3[1];
    uStack_140 = puVar3[2];
    uStack_13c = puVar3[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_148);
  }
  local_48 = local_78;
  FUN_140e609c0(param_1);
  ppuVar9 = &local_50;
  uVar7 = CONCAT44(uVar8,DAT_1419fd6d8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar7,ppuVar9);
  if (puVar3 != puVar2) {
    local_148 = *puVar3;
    uStack_144 = puVar3[1];
    uStack_140 = puVar3[2];
    uStack_13c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_148);
  }
  FUN_140e60910(1);
  local_118 = 0x12;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5008);
  FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_d0,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  FUN_140e63610(uVar4,param_2,&local_138,0,&local_d0,0);
  local_118 = 0x15;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56c20);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_158,FUN_140b8f330,param_1);
  if (&local_158 != puVar1) {
    local_148 = (uint)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_118 = 0x39;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56bb0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_158,gml_Object_oOfferingPickup_Alarm_0,param_1);
  if (&local_158 != puVar1) {
    local_148 = (uint)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return;
}

