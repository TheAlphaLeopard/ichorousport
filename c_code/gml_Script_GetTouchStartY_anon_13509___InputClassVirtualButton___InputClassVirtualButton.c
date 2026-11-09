// gml_Script_GetTouchStartY_anon_13509___InputClassVirtualButton___InputClassVirtualButton @ 0x14005d140

undefined8 *
gml_Script_GetTouchStartY_anon_13509___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_GetTouchDY@anon@13185@__InputClassVirtualButton@__InputClassVirtualButton";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x204;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_18 = 0x205;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe398);
    iVar2 = FUN_140e851f0(uVar3,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 != 0) {
      local_18 = 0x207;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe438);
      uStack_3c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_40 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) == 0) {
        local_48 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_48,puVar4);
      }
      FUN_1400462a0(&local_48,uVar3);
      if (&local_48 != param_3) {
        local_38 = (undefined4)local_48;
        uStack_34 = local_48._4_4_;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_38);
      }
      if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) == 0) {
        DAT_141dc7a50 = (undefined8 *)local_28;
        return param_3;
      }
      FUN_140041a50(&local_48);
      DAT_141dc7a50 = (undefined8 *)local_28;
      return param_3;
    }
    local_18 = 0x205;
  }
  else {
    local_18 = 0x204;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = 0;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

