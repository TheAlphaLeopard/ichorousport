// gml_Script_anon_2675_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409bc6d0

undefined8 *
gml_Script_anon_2675_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_res8;
  undefined4 uVar5;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [3];
  byte local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@2281@gml_Object_oEnemyDireMutt_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x6c;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x6e;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0f48);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_28 = 0x71;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57530);
    if (puVar4 != local_58) {
      local_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      uStack_3c = puVar4[3];
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_58);
      }
      FUN_140041b80(local_58,&local_48);
    }
    local_res8 = local_58;
    FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar5,DAT_141a57c30),&local_res8);
    local_28 = 0x73;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
  else {
    local_28 = 0x6f;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    puVar3 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_68,0,uVar2,0);
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
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

