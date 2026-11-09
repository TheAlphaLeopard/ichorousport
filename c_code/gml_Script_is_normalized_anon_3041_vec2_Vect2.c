// gml_Script_is_normalized_anon_3041_vec2_Vect2 @ 0x140637f00

undefined8 *
gml_Script_is_normalized_anon_3041_vec2_Vect2
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *local_res8;
  undefined4 uVar4;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_length@anon@2513@vec2@Vect2";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x5e;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x61;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a008f8);
  puVar2 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_68,0,uVar1,0);
  uVar4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (puVar2 != local_78) {
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_48);
  }
  local_res8 = local_78;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar4,DAT_1419fd718),&local_res8);
  if (puVar3 != param_3) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

