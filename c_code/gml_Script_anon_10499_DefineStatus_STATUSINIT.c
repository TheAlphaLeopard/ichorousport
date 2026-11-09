// gml_Script_anon_10499_DefineStatus_STATUSINIT @ 0x1405cb020

undefined8 *
gml_Script_anon_10499_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulonglong local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_c8 [12];
  byte local_bc;
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
  undefined1 *local_48;
  uint *local_40;
  
  local_110 = "gml_Script_anon@8877@DefineStatus@STATUSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x197;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_d4 = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x198;
  puVar2 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff2f8);
  uStack_13c = 0xf;
  local_148 = 0x1000002000000f9;
  local_138 = 0xf9;
  uStack_134 = 0x1000002;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_138);
  local_68 = local_c8;
  uStack_13c = 0xf;
  local_148 = 0x1000002000000fa;
  local_138 = 0xfa;
  uStack_134 = 0x1000002;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_138);
  local_60 = local_b8;
  uStack_13c = 0xf;
  local_148 = 0x1000002000000fb;
  local_138 = 0xfb;
  uStack_134 = 0x1000002;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  local_58 = local_a8;
  uStack_13c = 0xf;
  local_148 = 0x1000002000000fc;
  local_138 = 0xfc;
  uStack_134 = 0x1000002;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_138);
  local_50 = local_98;
  local_138 = DAT_1419ef3f8 & 0xffffff;
  uStack_134 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_134 == 0xf) {
    uStack_134 = 0x4000004;
  }
  else {
    uStack_134 = uStack_134 | 0x1000000;
  }
  uStack_13c = 0xf;
  local_148 = CONCAT44(uStack_134,DAT_1419ef3f8) & 0xffffffff00ffffff;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  local_48 = local_88;
  uVar6 = CONCAT44(uVar7,DAT_1419fdca8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_f0,4,uVar6,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar3 != local_78) {
    local_138 = *puVar3;
    uStack_134 = puVar3[1];
    uStack_130 = puVar3[2];
    uStack_12c = puVar3[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_138);
  }
  local_40 = local_78;
  FUN_140e609c0(param_1);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_e0,2,CONCAT44(uVar7,DAT_1419fd6d8),&local_48
                                );
  if (puVar3 != puVar2) {
    local_138 = *puVar3;
    uStack_134 = puVar3[1];
    uStack_130 = puVar3[2];
    uStack_12c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0x199;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff0a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_108 = 0x19a;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff138);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_108 = 0x19b;
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff018);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar5) {
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_138);
  }
  local_108 = 0x19c;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff0d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_108 = 0x19d;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  FUN_140e87170(uVar6,DAT_141a1f580,0x80000000,&local_100,param_1,param_2);
  uStack_13c = 0xf;
  local_148 = 0x1000000000000ee;
  iVar1 = FUN_140e851f0(&local_100,&local_148,DAT_141955260,0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar1 == 0) {
    local_108 = 0x19e;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0x3ff0000000000000;
    uStack_13c = 0xf;
    local_148 = 0x100000000000106;
    FUN_140e87930(&local_148,DAT_1419ff1c8,0x80000000,&local_128);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

