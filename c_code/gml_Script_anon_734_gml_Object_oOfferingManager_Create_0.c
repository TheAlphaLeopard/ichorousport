// gml_Script_anon_734_gml_Object_oOfferingManager_Create_0 @ 0x140b87550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_734_gml_Object_oOfferingManager_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [3];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined4 *local_40;
  undefined1 *local_38;
  
  local_80 = "gml_Object_oOfferingManager_Create_0";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  local_64 = 0xffffff;
  local_70 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_78 = 2;
  if (puVar2 != local_60) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_b8);
  }
  local_40 = local_60;
  local_b8 = _DAT_1419ec5b0;
  uStack_b4 = uRam00000001419ec5b4;
  uStack_b0 = uRam00000001419ec5b8;
  uStack_ac = uRam00000001419ec5bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_38 = local_50;
  uVar6 = CONCAT44(uVar7,DAT_141a01af8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_70,2,uVar6,&local_40);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_78 = 3;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    FUN_140e609c0(DAT_141a729d8);
    uVar4 = CONCAT44(uVar7,DAT_1419ef5d8);
    puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_98,0,uVar4,0);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar5 != puVar2) {
      local_b8 = *puVar5;
      uStack_b4 = puVar5[1];
      uStack_b0 = puVar5[2];
      uStack_ac = puVar5[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_78 = 4;
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  local_70 = 0;
  local_68 = 0;
  local_64 = 5;
  if (puVar3 != local_60) {
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_b8);
  }
  local_40 = local_60;
  local_b8 = _DAT_1419ec5b0;
  uStack_b4 = uRam00000001419ec5b4;
  uStack_b0 = uRam00000001419ec5b8;
  uStack_ac = uRam00000001419ec5bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_38 = local_50;
  uVar6 = CONCAT44(uVar7,DAT_141a01af8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_70,2,uVar6,&local_40);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_78 = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    FUN_140e609c0(DAT_141a729d8);
    puVar2 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_98,0,CONCAT44(uVar7,DAT_1419ef5d8),0);
    if (puVar2 != puVar3) {
      local_b8 = *puVar2;
      uStack_b4 = puVar2[1];
      uStack_b0 = puVar2[2];
      uStack_ac = puVar2[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_78 = 8;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f48d8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_1192_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0x1d;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f48a8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_1741_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0x32;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4888);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_2455_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0x43;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f48e8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_3294_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 99;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3368);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_3888_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0x7e;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef958);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_4378_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0x90;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fefd8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_4593_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0xa4;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f48b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script_anon_4965_gml_Object_oOfferingManager_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0xad;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f27c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Object_oOfferingManager_Other_4,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_78 = 0xbd;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f48f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,&LAB_140b87520,param_1);
  if (&local_b8 != puVar2) {
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

