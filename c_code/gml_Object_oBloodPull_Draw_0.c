// gml_Object_oBloodPull_Draw_0 @ 0x1406de310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodPull_Draw_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *local_res18;
  undefined4 uVar7;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Object_oBloodPull_Create_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_58 = 4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 5;
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04118);
  FUN_140e609c0(param_1);
  dVar1 = (double)FUN_140e794b0(0,0x400c000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = dVar1 + 1.0;
  FUN_140e60910(1);
  local_58 = 6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04118);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56d00);
  FUN_140e609c0(param_1);
  if (puVar3 != puVar5) {
    local_78 = *puVar3;
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffea8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc010000000000000;
  local_58 = 8;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04198);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar3) {
    local_88 = 0x3ff0000000000000;
    uStack_80 = uStack_70;
    uStack_7c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  local_58 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 0xb;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04168);
  local_78 = CONCAT44(uRam0000000141dc68a4,_DAT_141dc68a0);
  uStack_70 = uRam0000000141dc68a8;
  uStack_6c = uRam0000000141dc68ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_78);
  local_res18 = local_98;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,&local_res18);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_80 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_88,puVar5);
  }
  uStack_6c = 7;
  local_78 = CONCAT44(local_78._4_4_,2);
  FUN_140042560(&local_88,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (&local_88 != puVar3) {
    local_78 = local_88;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_58 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04128);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4010000000000000;
  local_58 = 0xe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01b48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 0x13;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a040c8);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar3) {
    local_88 = 0x3ff0000000000000;
    uStack_80 = uStack_70;
    uStack_7c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  local_58 = 0x15;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uStack_6c = 0xf;
  local_78 = 0x100000000000106;
  local_88 = 0x100000000000106;
  uStack_80 = uStack_70;
  uStack_7c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_88);
  local_res18 = local_98;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar7,DAT_141a02ef8),&local_res18);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_58 = 0x15;
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

