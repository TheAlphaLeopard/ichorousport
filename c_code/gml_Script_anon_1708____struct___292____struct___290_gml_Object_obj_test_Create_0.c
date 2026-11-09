// gml_Script_anon_1708____struct___292____struct___290_gml_Object_obj_test_Create_0 @ 0x14068bb70

undefined8 *
gml_Script_anon_1708____struct___292____struct___290_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 uVar10;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [3];
  byte local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script____struct___283@gml_Object_obj_test_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x32;
  uVar10 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_90,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a02528);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a02408);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a02398);
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a022f8);
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a02558);
  puVar6 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a023e8);
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de10a4) {
    _Init_thread_header(&DAT_141de10a4);
    if (DAT_141de10a4 == -1) {
      DAT_141de1190 = FUN_140e63aa0(DAT_141a02298);
      _Init_thread_footer(&DAT_141de10a4);
    }
  }
  FUN_140e643a0(param_1,DAT_141de1190);
  local_48 = 0x33;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44db8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_78,
                gml_Script_anon_1175____struct___285____struct___283_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_78 != puVar1) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  if (puVar1 != local_90) {
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_res8 = local_90;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,local_res10,&local_a0,1,uVar8,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar1 != puVar7) {
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x38;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_94 = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a447f8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_78,
                gml_Script_anon_1271____struct___286____struct___283_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_78 != puVar2) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  if (puVar2 != local_90) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_res8 = local_90;
  FUN_140e609c0(param_1);
  uVar8 = local_res10;
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,local_res10,&local_a0,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x3d;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_94 = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45218);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_78,gml_Script____struct___287____struct___283_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_78 != puVar3) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  if (puVar3 != local_90) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_res8 = local_90;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,uVar8,&local_a0,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x42;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_94 = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44e88);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_78,gml_Script____struct___289____struct___283_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_78 != puVar4) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  FUN_140e60910(1);
  if (puVar4 != local_90) {
    local_68 = *puVar4;
    uStack_64 = puVar4[1];
    uStack_60 = puVar4[2];
    uStack_5c = puVar4[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_res8 = local_90;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,uVar8,&local_a0,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x47;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_94 = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45598);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_78,gml_Script____struct___283_gml_Object_obj_test_Create_0,0);
  if (&local_78 != puVar5) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  FUN_140e60910(1);
  if (puVar5 != local_90) {
    local_68 = *puVar5;
    uStack_64 = puVar5[1];
    uStack_60 = puVar5[2];
    uStack_5c = puVar5[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_res8 = local_90;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,uVar8,&local_a0,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x4c;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_94 = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44cb8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_78,gml_Script____struct___291____struct___290_gml_Object_obj_test_Create_0,0)
  ;
  if (&local_78 != puVar6) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  FUN_140e60910(1);
  if (puVar6 != local_90) {
    local_68 = *puVar6;
    uStack_64 = puVar6[1];
    uStack_60 = puVar6[2];
    uStack_5c = puVar6[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_res8 = local_90;
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,uVar8,&local_a0,1,CONCAT44(uVar10,DAT_1419fd6d8),&local_res8);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return local_res18;
}

