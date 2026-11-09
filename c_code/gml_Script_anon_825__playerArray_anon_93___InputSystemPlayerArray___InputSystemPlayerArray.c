// gml_Script_anon_825__playerArray_anon_93___InputSystemPlayerArray___InputSystemPlayerArray @ 0x1400d5340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_825__playerArray_anon_93___InputSystemPlayerArray___InputSystemPlayerArray
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Script___InputSystemCallbackArray";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 5;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc85c) {
    _Init_thread_header(&DAT_141ddc85c);
    if (DAT_141ddc85c == -1) {
      DAT_141ddc860 = (longlong *)FUN_140e63aa0(DAT_141a03138);
      _Init_thread_footer(&DAT_141ddc85c);
    }
  }
  if (DAT_141ddc05d == '\0') {
    FUN_140e64380(DAT_141ddc860,"gml_Script___InputSystemCallbackArray");
    FUN_140e64380(param_1,"gml_Script___InputSystemCallbackArray");
  }
  local_48 = 7;
  if (DAT_141ddc05d == '\0') {
    DAT_141ddc05d = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc860 + 0x10))(DAT_141ddc860,DAT_1419fee58);
    local_88 = _DAT_1419e1b00;
    uStack_84 = uRam00000001419e1b04;
    uStack_80 = uRam00000001419e1b08;
    uStack_7c = uRam00000001419e1b0c;
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_88);
    local_78 = local_40;
    FUN_140e645a0(&local_88,gml_GlobalScript___InputSystemPlayerArray,0);
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_30);
    }
    FUN_140041b80(local_30,&local_68);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_70 = local_30;
    FUN_140e609c0(DAT_141ddc860);
    puVar2 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar4,DAT_1419fd628),&local_78);
    if (puVar2 != puVar1) {
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_68);
    }
    FUN_140e60910(1);
  }
  local_48 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc860 + 8))(DAT_141ddc860,DAT_1419fee58);
  if (puVar3 != param_3) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

