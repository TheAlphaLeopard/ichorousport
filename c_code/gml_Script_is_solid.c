// gml_Script_is_solid @ 0x140390f50

undefined8 *
gml_Script_is_solid(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  undefined8 **ppuVar4;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined1 local_108 [64];
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  
  local_120 = "gml_Script_interpolate";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 7;
  _eh_vector_constructor_iterator_(local_108,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 8;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_140391026:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_c8) goto LAB_140391026;
  }
  local_58 = &local_c8;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_140391073:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_b8) goto LAB_140391073;
  }
  local_50 = &local_b8;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_a8) goto LAB_1403910eb;
  }
  local_158 = *(undefined4 *)puVar1;
  uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_150 = *(undefined4 *)(puVar1 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_158);
LAB_1403910eb:
  local_48 = &local_a8;
  if ((param_4 < 2) || (puVar3 = (undefined8 *)param_5[1], puVar3 != &local_98)) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  local_40 = &local_98;
  ppuVar4 = &local_58;
  puVar2 = (undefined4 *)gml_Script_SprayBlood(param_1,param_2,&local_148,2,ppuVar4);
  uVar5 = (undefined4)((ulonglong)ppuVar4 >> 0x20);
  if (puVar2 != local_88) {
    local_158 = *puVar2;
    uStack_154 = puVar2[1];
    uStack_150 = puVar2[2];
    uStack_14c = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_158);
  }
  local_38 = local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_138,3,CONCAT44(uVar5,DAT_141a00c58),&local_48);
  if (puVar3 != param_3) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

