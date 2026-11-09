// gml_Script_DPad_anon_7804___InputClassVirtualButton___InputClassVirtualButton @ 0x1400592c0

undefined8 *
gml_Script_DPad_anon_7804___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_HPad@anon@7087@__InputClassVirtualButton@__InputClassVirtualButton";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0xef;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_28 = 0xf0;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd248);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 10;
    *puVar3 = 3;
    local_28 = 0xf1;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe0c8);
    FUN_140e609c0(param_1);
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    if (puVar4 != puVar3) {
      local_48 = *(undefined4 *)puVar4;
      uStack_44 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_40 = *(undefined4 *)(puVar4 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    FUN_140e60910(1);
    local_28 = 0xf2;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd0b8);
    FUN_140e609c0(param_1);
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    if (puVar4 != puVar3) {
      local_48 = *(undefined4 *)puVar4;
      uStack_44 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_40 = *(undefined4 *)(puVar4 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    FUN_140e60910(1);
    local_28 = 0xf3;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd008);
    FUN_140e609c0(param_1);
    if (param_4 < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[2];
    }
    if (puVar4 != puVar3) {
      local_48 = *(undefined4 *)puVar4;
      uStack_44 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_40 = *(undefined4 *)(puVar4 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    FUN_140e60910(1);
    local_28 = 0xf4;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd108);
    FUN_140e609c0(param_1);
    if (puVar3 != &DAT_1419df7b0) {
      local_48 = (undefined4)DAT_1419df7b0;
      uStack_44 = DAT_1419df7b0._4_4_;
      uStack_40 = DAT_1419df7b8;
      uStack_3c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    FUN_140e60910(1);
    local_28 = 0xf5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcfd8);
    FUN_140e609c0(param_1);
    if (puVar3 != &DAT_1419df7b0) {
      local_48 = (undefined4)DAT_1419df7b0;
      uStack_44 = DAT_1419df7b0._4_4_;
      uStack_40 = DAT_1419df7b8;
      uStack_3c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    FUN_140e60910(1);
    local_28 = 0xf6;
  }
  else {
    local_28 = 0xef;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

