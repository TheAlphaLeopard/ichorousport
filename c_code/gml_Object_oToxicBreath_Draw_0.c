// gml_Object_oToxicBreath_Draw_0 @ 0x140dc9110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oToxicBreath_Draw_0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  
  local_90 = "gml_Object_oToxicBreath_Create_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_88 = 1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01898);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x416fffffe0000000;
  local_88 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a018a8);
  uVar1 = FUN_140e78f40(3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a018a8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe698);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_a8 = *puVar2;
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  FUN_140e60910(1);
  local_88 = 4;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  local_a8 = CONCAT44(uRam00000001419ee354,_DAT_1419ee350);
  uStack_a0 = uRam00000001419ee358;
  uStack_9c = uRam00000001419ee35c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_a8);
  local_b8 = local_80;
  local_a8 = CONCAT44(uRam00000001419ee324,_DAT_1419ee320);
  uStack_a0 = uRam00000001419ee328;
  uStack_9c = uRam00000001419ee32c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_a8);
  local_b0 = local_70;
  FUN_140e609c0(param_1);
  uVar1 = FUN_140e794b0(0xeb851eb8,0x3fbeb851eb851eb8);
  puVar3 = (undefined8 *)FUN_140e78db0(&local_d8,2,&local_b8);
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_c8,puVar3);
  }
  uStack_9c = 0;
  local_a8 = uVar1;
  FUN_140042560(&local_c8,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (&local_c8 != puVar2) {
    local_a8 = local_c8;
    uStack_a0 = uStack_c0;
    uStack_9c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_88 = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_a8 = CONCAT44(uRam00000001419ee354,_DAT_1419ee350);
  uStack_a0 = uRam00000001419ee358;
  uStack_9c = uRam00000001419ee35c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_a8);
  local_b8 = local_80;
  local_a8 = CONCAT44(uRam00000001419ee324,_DAT_1419ee320);
  uStack_a0 = uRam00000001419ee328;
  uStack_9c = uRam00000001419ee32c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_a8);
  local_b0 = local_70;
  FUN_140e609c0(param_1);
  uVar1 = FUN_140e794b0(0,0x3fa47ae147ae147b);
  puVar3 = (undefined8 *)FUN_140e78db0(&local_d8,2,&local_b8);
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_c8,puVar3);
  }
  uStack_9c = 0;
  local_a8 = uVar1;
  FUN_140042560(&local_c8,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (&local_c8 != puVar2) {
    local_a8 = local_c8;
    uStack_a0 = uStack_c0;
    uStack_9c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_88 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fd8);
  uVar1 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 7;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fa8);
  uVar1 = FUN_140e794b0(0x33333333,0x3fe6666666666666);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2e98);
  uVar1 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f88);
  uVar1 = FUN_140e794b0(0x9999999a,0x3feccccccccccccd);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f58);
  uVar1 = FUN_140e794b0(0,0x4004000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ec8);
  uVar1 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 0xc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f78);
  uVar1 = FUN_140e794b0(0x9999999a,0x3feccccccccccccd);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3018);
  uVar1 = FUN_140e794b0(0x9999999a,0x3ffa666666666666);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 0xe;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f18);
  uVar1 = FUN_140e78f40(0x168,600);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f18);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_a8 = *puVar2;
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  FUN_140e60910(1);
  local_88 = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4054000000000000;
  local_88 = 0x12;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a018c8);
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)
           FUN_140e8da20(&local_d8,param_1,0x10,&DAT_141dc7890,&DAT_1419ee390,&DAT_1419ee2f0,
                         &DAT_1419ee340,&DAT_1419ee2d0,&DAT_1419ee3a0,&DAT_1419ee2c0,&DAT_1419ee360,
                         &DAT_1419ee2b0,&DAT_1419ee300,&DAT_1419ee320,&DAT_1419ee370,&DAT_1419ee310,
                         &DAT_1419ee380,&DAT_1419ee330,&DAT_1419ee2e0);
  if (puVar3 != puVar2) {
    local_a8 = *puVar3;
    uStack_a0 = *(undefined4 *)(puVar3 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  FUN_140e60910(1);
  local_88 = 0x19;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3058);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_88 = 0x1a;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a018b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 0x1b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a018e8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

