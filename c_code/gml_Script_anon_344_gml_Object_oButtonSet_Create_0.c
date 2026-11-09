// gml_Script_anon_344_gml_Object_oButtonSet_Create_0 @ 0x14086e190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_344_gml_Object_oButtonSet_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 *local_res8;
  undefined4 uVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 **ppuVar10;
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
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oButtonSet_Create_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_38 = 1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d558);
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)FUN_140e8da20(&local_68,param_1,0);
  if (puVar3 != puVar2) {
    local_78 = *puVar3;
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d8e8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_38 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d408);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_38 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_38 = 6;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d398);
  uStack_6c = 0xf;
  local_78 = 0x1000001000000b8;
  local_58 = 0xb8;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_70;
  uStack_4c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_res8 = local_98;
  FUN_140e609c0(param_1);
  uVar7 = CONCAT44(uVar9,DAT_141a047c8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_a8,1,uVar7,&local_res8);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar5 != puVar4) {
    local_58 = *puVar5;
    uStack_54 = puVar5[1];
    uStack_50 = puVar5[2];
    uStack_4c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 7;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d458);
  uStack_6c = 0xf;
  local_78 = 0x1000001000000b8;
  local_58 = 0xb8;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_70;
  uStack_4c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_res8 = local_98;
  FUN_140e609c0(param_1);
  ppuVar10 = &local_res8;
  uVar8 = CONCAT44(uVar9,DAT_141a04808);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_a8,1,uVar8,ppuVar10);
  if (puVar5 != puVar4) {
    local_58 = *puVar5;
    uStack_54 = puVar5[1];
    uStack_50 = puVar5[2];
    uStack_4c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 9;
  puVar6 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f61e8);
  if (puVar6 != &DAT_141dd7108) {
    local_58 = _DAT_141dd7108;
    uStack_54 = uRam0000000141dd710c;
    uStack_50 = uRam0000000141dd7110;
    uStack_4c = DAT_141dd7114;
    if ((1 << ((byte)*(undefined4 *)(puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  local_38 = 10;
  puVar6 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d828);
  if (puVar6 != &DAT_141dd7108) {
    local_58 = _DAT_141dd7108;
    uStack_54 = uRam0000000141dd710c;
    uStack_50 = uRam0000000141dd7110;
    uStack_4c = DAT_141dd7114;
    if ((1 << ((byte)*(undefined4 *)(puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  local_38 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d788);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_38 = 0xc;
  puVar6 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f93d8);
  if (puVar6 != &DAT_141dd7108) {
    local_58 = _DAT_141dd7108;
    uStack_54 = uRam0000000141dd710c;
    uStack_50 = uRam0000000141dd7110;
    uStack_4c = DAT_141dd7114;
    if ((1 << ((byte)*(undefined4 *)(puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  local_38 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d5d8);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar2) {
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_70;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  local_38 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d938);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_anon_813_anon_763_gml_Object_oButtonSet_Create_0,param_1);
  if (&local_78 != puVar2) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x15;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d738);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,
                gml_Script_anon_980____struct___411_anon_763_gml_Object_oButtonSet_Create_0,param_1)
  ;
  if (&local_78 != puVar2) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x2b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55560);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,FUN_14086d770,param_1);
  if (&local_78 != puVar2) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x42;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d328);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,FUN_14086de90,param_1);
  if (&local_78 != puVar2) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x48;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d6e8);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar2) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_70;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  local_38 = 0x49;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d5a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_38 = 0x4a;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d6b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_38 = 0x4b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d3b8);
  FUN_140e87440(uVar1,DAT_1419eeed8,0x80000000,&local_88,uVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (&local_88 != puVar2) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

