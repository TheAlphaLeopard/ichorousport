// gml_Object_oHemangiomaEye_Step_0 @ 0x140b04d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oHemangiomaEye_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 *local_res18 [2];
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Object_oHemangiomaEye_Create_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = (undefined1 *)0x0;
  local_64 = 0xffffff;
  local_70 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_88 = 3;
  FUN_140e98b30(param_1,param_2);
  local_88 = 5;
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  local_54 = 0;
  local_60 = &DAT_bff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_60);
  local_88 = 7;
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  local_64 = 0;
  local_70 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_70);
  local_88 = 8;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_cc = 6;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0a728,0x80000000,&local_48,uVar6,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_c8 = (undefined4)local_48;
  uStack_c4 = local_48._4_4_;
  uStack_c0 = uStack_40;
  uStack_bc = uStack_3c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_res18[0] = local_a8;
  uVar7 = CONCAT44(uVar8,DAT_141a049b8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar7,local_res18);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_cc = *(uint *)((longlong)puVar1 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_d8,puVar1);
  }
  uStack_bc = 7;
  local_c8 = 1;
  FUN_1400462a0(&local_d8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  plVar4 = local_d8;
  if ((uStack_cc & 0xffffff) != 0) {
    plVar4 = (longlong *)FUN_140e4b060(&local_d8);
  }
  uVar7 = FUN_140e78f00((longlong)(double)plVar4);
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = uVar7;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_80);
  local_88 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f310);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fd3333333333333;
  local_88 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3518);
  uVar7 = FUN_140e78f40(10);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar7;
  local_88 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3528);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3feb851eb851eb85;
  local_88 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3538);
  uVar7 = FUN_140e794b0(0,0x4020000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar7;
  local_88 = 0xf;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  local_c8 = _DAT_141dc7130;
  uStack_c4 = uRam0000000141dc7134;
  uStack_c0 = uRam0000000141dc7138;
  uStack_bc = uRam0000000141dc713c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_res18[0] = local_a8;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar8,DAT_141a0a0d8),local_res18);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_d8,puVar2);
  }
  uStack_bc = 7;
  local_c8 = 5;
  FUN_140042560(&local_d8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (&local_d8 != puVar1) {
    local_c8 = (undefined4)local_d8;
    uStack_c4 = local_d8._4_4_;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e60910(1);
  local_88 = 0x12;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3548);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Object_oHindsight_Create_0,param_1);
  if (&local_c8 != puVar3) {
    local_d8 = (longlong *)CONCAT44(uStack_c4,local_c8);
    uStack_d0 = uStack_c0;
    uStack_cc = uStack_bc;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

