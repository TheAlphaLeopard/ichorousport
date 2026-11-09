// gml_Script_anon_8075____struct___129_JUKEBOX_system @ 0x14039be80

undefined8 *
gml_Script_anon_8075____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 *local_78;
  double *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 local_40;
  byte local_34;
  double local_30;
  undefined4 local_24;
  
  local_50 = "gml_Script_anon@8646@anon@8075@___struct___129@JUKEBOX_system";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 300;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 300;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4b28);
  if (puVar2 != &local_40) {
    local_68 = *puVar2;
    uStack_60 = puVar2[1];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_68);
  }
  iVar1 = DAT_1419f4df8;
  local_78 = &local_40;
  if ((1 << ((byte)local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_30);
  }
  local_24 = 0;
  local_30 = (double)iVar1;
  local_70 = &local_30;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,2,CONCAT44(uVar3,DAT_141a035d8),&local_78);
  if (puVar2 != param_3) {
    local_68 = *puVar2;
    uStack_60 = puVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

