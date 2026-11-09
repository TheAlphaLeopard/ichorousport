// gml_Script____struct___103____struct___102____struct___100_ImGui_ImGui @ 0x1402ce6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___103____struct___102____struct___100_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *local_res18;
  undefined4 uVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  byte local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_SetWindowFocus@anon@106701@ImGui@ImGui";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xcce;
  FUN_140041df0(local_68,param_4,1,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xcce;
  puVar4 = &DAT_1419df7b0;
  uVar3 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0xcce;
    if ((int)local_68[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_60;
      if (puVar2 == (undefined8 *)&DAT_141dce6c8) goto LAB_1402ce7f6;
    }
    local_58 = _DAT_141dce6c8;
    uStack_54 = uRam0000000141dce6cc;
    uStack_50 = uRam0000000141dce6d0;
    uStack_4c = DAT_141dce6d4;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
LAB_1402ce7f6:
  local_38 = 0xccf;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  if (((int)local_68[0] < 1) || (puVar4 = (undefined8 *)*local_60, puVar4 != &local_78)) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_58);
  }
  local_res18 = &local_78;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar5,DAT_141a59730),&local_res18);
  if (puVar4 != param_3) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

