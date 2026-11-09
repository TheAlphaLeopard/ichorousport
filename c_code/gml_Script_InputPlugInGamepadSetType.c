// gml_Script_InputPlugInGamepadSetType @ 0x14035bf00

undefined8 *
gml_Script_InputPlugInGamepadSetType
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_68 [48];
  undefined8 local_38;
  byte local_2c;
  
  local_90 = "gml_Script_InputPlugInGamepadSetMapping";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 7;
  _eh_vector_constructor_iterator_(local_68,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = (undefined8 *)0x0;
  local_74 = 0;
  local_80 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 9;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 == &local_38) goto LAB_14035bffc;
  }
  local_b8 = *(undefined4 *)puVar4;
  uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_b0 = *(undefined4 *)(puVar4 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  FUN_140041b80(&local_38,&local_b8);
LAB_14035bffc:
  local_a0 = &local_38;
  ppuVar3 = (undefined8 **)gml_Script___InputGamepadGUIDParse(param_1,param_2,&local_80,1,&local_a0)
  ;
  if (ppuVar3 != &local_d8) {
    local_b8 = *(undefined4 *)ppuVar3;
    uStack_b4 = *(undefined4 *)((longlong)ppuVar3 + 4);
    uStack_b0 = *(undefined4 *)(ppuVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)ppuVar3 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_b8);
  }
  local_88 = 10;
  iVar1 = FUN_140e851f0(&local_d8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 10;
  }
  else {
    local_88 = 0xc;
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_c0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_c8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_c8);
    }
    uStack_ac = 7;
    local_b8 = 0x8001;
    FUN_1400462a0(&local_c8,&local_b8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (2 < param_4) {
      puVar5 = (undefined8 *)param_5[2];
    }
    uVar2 = FUN_140e4a740(&local_c8);
    puVar4 = (undefined8 *)FUN_140e48e40(&local_d8,uVar2);
    FUN_140e609c0(*local_d8);
    if (puVar5 != puVar4) {
      local_b8 = *(undefined4 *)puVar5;
      uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_b0 = *(undefined4 *)(puVar5 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_b8);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

