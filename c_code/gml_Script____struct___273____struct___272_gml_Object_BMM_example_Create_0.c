// gml_Script____struct___273____struct___272_gml_Object_BMM_example_Create_0 @ 0x1406792f0

undefined8 *
gml_Script____struct___273____struct___272_gml_Object_BMM_example_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_res8;
  undefined4 uVar3;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
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
  
  local_40 = "gml_Script____struct___270@gml_Object_BMM_example_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x11;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a019e8);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0fb4) {
    _Init_thread_header(&DAT_141de0fb4);
    if (DAT_141de0fb4 == -1) {
      DAT_141de0fd0 = FUN_140e63aa0(DAT_141a01a78);
      _Init_thread_footer(&DAT_141de0fb4);
    }
  }
  FUN_140e643a0(param_1,DAT_141de0fd0);
  local_38 = 0x12;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45218);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_78,
                gml_Script_anon_636____struct___273____struct___272_gml_Object_BMM_example_Create_0,
                0);
  if (&local_78 != puVar1) {
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  if (puVar1 != local_88) {
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_res8 = local_88;
  FUN_140e609c0(param_1);
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar3,DAT_1419fd6d8),&local_res8);
  if (puVar1 != puVar2) {
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

