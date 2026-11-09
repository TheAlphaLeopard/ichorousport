// gml_Script____struct___295____struct___294_gml_Object_obj_test_Create_0 @ 0x14068ce70

undefined8 *
gml_Script____struct___295____struct___294_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_res8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script____struct___290@gml_Object_obj_test_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x52;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a024f8);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a024c8);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a02238);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de10b0) {
    _Init_thread_header(&DAT_141de10b0);
    if (DAT_141de10b0 == -1) {
      DAT_141de1180 = FUN_140e63aa0(DAT_141a02428);
      _Init_thread_footer(&DAT_141de10b0);
    }
  }
  FUN_140e643a0(param_1,DAT_141de1180);
  local_38 = 0x53;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44db8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_68,gml_Script____struct___292____struct___290_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_68 != puVar1) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  if (puVar1 != local_78) {
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_res8 = local_78;
  FUN_140e609c0(param_1);
  uVar5 = CONCAT44(uVar6,DAT_1419fd6d8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,1,uVar5,&local_res8);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar1 != puVar4) {
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x56;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45218);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_68,gml_Script____struct___293____struct___290_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_68 != puVar2) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  if (puVar2 != local_78) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_res8 = local_78;
  FUN_140e609c0(param_1);
  uVar5 = CONCAT44(uVar6,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,1,uVar5,&local_res8);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar2 != puVar1) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x59;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44e88);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_68,
                gml_Script_anon_1969____struct___295____struct___294_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_68 != puVar3) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  if (puVar3 != local_78) {
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_res8 = local_78;
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar6,DAT_1419fd6d8),&local_res8);
  if (puVar2 != puVar1) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

