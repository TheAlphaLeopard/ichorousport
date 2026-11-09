// gml_Script_InputPlugInGamepadResetMapping @ 0x14035ae10

undefined8 *
gml_Script_InputPlugInGamepadResetMapping
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [32];
  undefined8 local_40;
  byte local_34;
  
  local_80 = "gml_Script_InputPlugInGamepadNullifyMapping";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 6;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = (undefined8 *)0x0;
  local_64 = 0;
  local_70 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 8;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_40) goto LAB_14035af0c;
  }
  local_b8 = *(undefined4 *)puVar3;
  uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_b0 = *(undefined4 *)(puVar3 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_b8);
LAB_14035af0c:
  local_a8[0] = &local_40;
  ppuVar4 = (undefined8 **)gml_Script___InputGamepadGUIDParse(param_1,param_2,&local_70,1,local_a8);
  if (ppuVar4 != &local_d8) {
    local_b8 = *(undefined4 *)ppuVar4;
    uStack_b4 = *(undefined4 *)((longlong)ppuVar4 + 4);
    uStack_b0 = *(undefined4 *)(ppuVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)ppuVar4 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_b8);
  }
  local_78 = 9;
  iVar1 = FUN_140e851f0(&local_d8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 9;
  }
  else {
    local_78 = 0xb;
    FUN_140e645a0(&local_b8,gml_GlobalScript_InputPlugInGamepadResetMapping,param_1);
    if (1 < param_4) {
      puVar6 = (undefined8 *)param_5[1];
    }
    local_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_c0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_c8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_c8,puVar6);
    }
    uStack_8c = 7;
    local_98 = 0x8001;
    FUN_1400462a0(&local_c8,&local_98);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    uVar2 = FUN_140e4a740(&local_c8);
    puVar5 = (undefined4 *)FUN_140e48e40(&local_d8,uVar2);
    FUN_140e609c0(*local_d8);
    if (&local_b8 != puVar5) {
      local_98 = local_b8;
      uStack_94 = uStack_b4;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_98);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

