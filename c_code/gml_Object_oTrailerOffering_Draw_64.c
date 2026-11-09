// gml_Object_oTrailerOffering_Draw_64 @ 0x140dd5820

void gml_Object_oTrailerOffering_Draw_64(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_80 = "gml_Object_oTrailerOffering_Create_0";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_78 = 2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01e98);
  if (puVar1 != &local_c8) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_70 = &local_c8;
  FUN_140e609c0(param_1);
  uVar7 = CONCAT44(uVar8,DAT_141a0aa48);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != puVar3) {
    local_f8 = *puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  FUN_140e60910(1);
  local_78 = 3;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01ee8);
  if (puVar2 != &local_c8) {
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_70 = &local_c8;
  FUN_140e609c0(param_1);
  uVar7 = CONCAT44(uVar8,DAT_141a0aa48);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != puVar3) {
    local_f8 = *puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  FUN_140e60910(1);
  local_78 = 4;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01e98);
  if (puVar3 != &local_c8) {
    local_f8 = *puVar3;
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_70 = &local_c8;
  uVar7 = CONCAT44(uVar8,DAT_141a01ed8);
  FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_78 = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01ee8);
  if (puVar4 != &local_c8) {
    local_f8 = *puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_70 = &local_c8;
  uVar7 = CONCAT44(uVar8,DAT_141a01ed8);
  FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_78 = 7;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01e88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_78 = 8;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01eb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_78 = 10;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01e88);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01ec8);
  if (puVar3 != &local_c8) {
    local_f8 = *puVar3;
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_70 = &local_c8;
  if (puVar5 != &local_b8) {
    local_f8 = *puVar5;
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  local_68 = &local_b8;
  if (puVar1 != &local_a8) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
  }
  local_60 = &local_a8;
  uVar7 = CONCAT44(uVar8,DAT_141a03ca8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar1 != &local_98) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_f8);
  }
  local_58 = &local_98;
  FUN_140e609c0(param_1);
  uVar7 = CONCAT44(uVar8,DAT_141a01138);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar7,&local_60);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar1 != puVar6) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_f8);
  }
  FUN_140e60910(1);
  local_78 = 0xb;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01eb8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01ea8);
  if (puVar4 != &local_c8) {
    local_f8 = *puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_70 = &local_c8;
  if (puVar1 != &local_b8) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  local_68 = &local_b8;
  if (puVar2 != &local_a8) {
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
  }
  local_60 = &local_a8;
  uVar7 = CONCAT44(uVar8,DAT_141a03ca8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar1 != &local_98) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_f8);
  }
  local_58 = &local_98;
  FUN_140e609c0(param_1);
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar8,DAT_141a01138),&local_60);
  if (puVar1 != puVar3) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  FUN_140e60910(1);
  local_78 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_78 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08b58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x403e000000000000;
  local_78 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f19f8);
  uStack_ec = 0xd;
  local_f8 = 0;
  if (&local_f8 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_f0;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

